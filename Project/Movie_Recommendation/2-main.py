import numpy as np
import pandas as pd

movies = pd.read_csv('tmdb_5000_movies.csv')
credits = pd.read_csv('tmdb_5000_credits.csv') 

movies=movies.merge(credits,on='title')

movies = movies[['movie_id','title','overview','genres','keywords','cast','crew']]

movies.dropna(inplace=True)

import ast

def convert(text):
    L = []
    for i in ast.literal_eval(text):
        L.append(i['name']) 
    return L 

movies['genres'] = movies['genres'].apply(convert)
movies['keywords'] = movies['keywords'].apply(convert)

def cast_fun(text):
    L = []
    counter = 0
    for i in ast.literal_eval(text):
        if counter < 3:
            L.append(i['name'])
        counter+=1
    return L 

movies['cast'] = movies['cast'].apply(cast_fun)

def get_director(text):
    L = []
    for i in ast.literal_eval(text):
        if i['job'] == 'Director':
            L.append(i['name'])
    return L 

movies['crew'] = movies['crew'].apply(get_director)

movies['overview'] = movies['overview'].apply(lambda x:x.split())

def space(L):
    L1 = []
    for i in L:
        L1.append(i.replace(" ",""))
    return L1

movies['cast'] = movies['cast'].apply(space)
movies['crew'] = movies['crew'].apply(space)
movies['genres'] = movies['genres'].apply(space)
movies['keywords'] = movies['keywords'].apply(space)

movies['tags'] = movies['overview'] + movies['genres'] + movies['keywords'] + movies['cast'] + movies['crew']

new_movies = movies [ ['movie_id', 'title', 'tags']]

new_movies['tags'] = new_movies['tags'].apply (lambda x:" ".join (x))

new_movies['tags'] = new_movies['tags'].apply(lambda x: x. lower ())

from sklearn.feature_extraction.text import CountVectorizer
cv = CountVectorizer(max_features=5000,stop_words='english')

vector = cv.fit_transform(new_movies['tags']).toarray()

import nltk

from nltk.stem.porter import PorterStemmer 
ps = PorterStemmer()

def stem(text):
    list_1 = []
    for i in text.split():
        list_1.append(ps.stem(i))
    return " ".join(list_1)

new_movies['tags'] = new_movies['tags'].apply(stem)

from sklearn.metrics.pairwise import cosine_similarity

similarity = cosine_similarity(vector)

def recommend(movie):
    index = new_movies[new_movies['title'] == movie].index[0]
    distances = sorted(list(enumerate(similarity[index])),reverse=True,key = lambda x: x[1])
    for i in distances[1:6]:
        print(new_movies.iloc[i[0]].title)

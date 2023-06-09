import pandas as pd

def recommend_movies(movie_title, rating_threshold=100, data_file='/Users/krishant/Documents/Learning/Study/Practice/Project/Movie_Recommendation/u.data', titles_file='/Users/krishant/Documents/Learning/Study/Practice/Project/Movie_Recommendation/Movie_Id_Titles'):
    # Load the data
    column_names = ['user_id', 'item_id', 'rating', 'timestamp']
    df = pd.read_csv(data_file, sep='\t', names=column_names)

    movie_titles = pd.read_csv(titles_file)
    df = pd.merge(df, movie_titles, on='item_id')

    # Compute ratings and number of ratings for each movie
    rating_mean = df.groupby('title')['rating'].mean()
    rating_count = df.groupby('title')['rating'].count()

    rating = pd.DataFrame(rating_mean)
    rating['No of Ratings'] = pd.DataFrame(rating_count)

    # Compute correlation with the given movie
    movie_mat = df.pivot_table(index='user_id', columns='title', values='rating')
    key_user_rating = movie_mat[movie_title]
    similar = movie_mat.corrwith(key_user_rating)
    corr_key = pd.DataFrame(similar, columns=['Correlation'])
    corr_key.dropna(inplace=True)
    corr_key = corr_key.join(rating['No of Ratings'])

    # Return top recommended movies
    return corr_key[corr_key['No of Ratings'] > rating_threshold].sort_values('Correlation', ascending=False).head()

# recommend_movies('Star Trek: First Contact (1996)')
# recommend_movies('Bad Boys (1995)')
# recommend_movies('Terminator 2: Judgment Day (1991)')
recommend_movies('Fargo (1996)')
# recommend_movies('Batman Returns (1992)')
recommend_movies('Star Wars (1977)')

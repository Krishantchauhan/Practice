#### Q1
a<-c(1,2,3)
b<-c(4,5,6)

m<-c(a,b)
m1<-matrix(m,nrow=2)
print(m1)


###### Q2
m2<-matrix(1:9, nrow=3)
print(m2)


#########Q3
is.matrix(m2)


#########Q4
m3<-matrix(1:25,nrow=5,byrow=TRUE)
print(m3)

#########Q5
print(m3[2:3,2:3])

#########Q6
print(m3[4:5,4:5])

#########Q7
print(sum(m3))


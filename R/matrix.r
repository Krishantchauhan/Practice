samsung<-c(100,101,205,505)
apple<-c(102,99,35,2)

stocks<-c(samsung,apple)

m <- matrix(stocks,byrow=TRUE,nrow=2)

day<-c("mon","tue","wed","thu")
name<-c("samsung","apple")

rownames(m)<-name
colnames(m)<-day
print(m)
#operation of matrix
print('col Sum')
print(colSums(m)) 
print(rowSums(m))
print(rowMeans(m))
print(colMeans(m))

#rbind 
fb<-c(123,1234,232,4345,565)
m2<-rbind(m,fb)
print(m2)
avg<-rowMeans(m2)

m2<-cbind(m2,avg)
print(m2)

#########################################
############ ##5## Selection and indexing
##########################################
#getting
mat <- matrix(1:50,byrow=TRUE,nrow=5)
print(mat)

# Grab first row
print(mat[1,])

#Grab first column
print(mat[,1])

# Grab first 3 rows
print(mat[1:3,])

# Grab top left rectangle of:
# 1,2,3
# 11,12,13
print(mat[1:2,1:3])

# Grab last two columns
print(mat[,9:10])

# Grab a center square of:
# 15,16
# 25,26
print(mat[2:3,5:6])

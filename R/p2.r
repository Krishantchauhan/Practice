# Create a list containing a vector (days of the week), 
# a matrix and a list and Give names to the elements in the list.

a<-list(c("m","t","w","th","f","s","su"),matrix(c(1,2,3,4,5,6,7,8,9),nrow=3),list(c(1,"krish")))
print(a)

#giving names
names(a)<-c("days","matrix","list")
print(a)

#acess by names
print(a$days)
print(a$matrix)
print(a$list)

#creating another list
b<-list(c("a","b","c"),matrix(c(2,4,8,16),nrow=2,byrow=TRUE),list(c(2,"Krishna")))
print(b)

#merging with another list
print("---------------------")
l<-c(a,b)
print(l)

#converting to an array
arr<-array(unlist(b),dim=c(3,3))
print(arr)

#converting to vector
v<-unlist(b)
print(v)

# matrix with name
mat<-matrix(c(1,2,3,4,5,6,7,8,9),nrow=3,byrow=TRUE)
rownames(mat)<-c("a","b","c")
colnames(mat)<-c("x","y","z")
print(mat)

#accessing the element of matrix
print(mat[2,])
print(mat[,2])

#arthimatic
mat1<-matrix(c(9,8,7,6,5,4,3,2,1),nrow=3,byrow=TRUE)
sub<-matrix(c(mat-mat1),nrow=3)
print(mat)
print(mat1)
print(sub)

#power of matrix
print(mat)
library(expm)    
p<-mat%^%2
print(p)
# p<-matrix.power(mat,2)
print(p)


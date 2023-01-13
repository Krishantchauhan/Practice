a<-c(1,2,3,4,5,6,3,8,9)
b<-c(6,7,8,9,10)

print(setdiff(b,a))

print(sort(a,decreasing=TRUE))

####list
x<-c(6,7,8,9,10)
y<-c(1,2,3,6,5)

#making matrix and combine vector
combine<-c(x,y)
mat<-matrix(combine,nrow=2)

list<-c(c(a,b),mat)
print(list)

##########33333333###########

v2<-c(102,99,35,2)
#Barplot
course<-c("a","b","c","d")
barplot(v2,col='grey',main="details",names.arg=course)
png("a.png")
dev.off()

###3Dpiechart
library(plotrix)
pie3D(v2,labels=course,main="details"
      ,col=rainbow(length(v2))
      ,explode=0.2,theta=1.5)
png("pie3D.jpg")
dev.off()

############################4444444444
v3<-c(102,99,35,2)
print(mean(v3,trim=0.3))

######function
fun<-function(x)
  mod(x)
v3<-c(102,99,35,12,4,45,67,2,4,5,5)
mode(v3)

#########factorial
x<-5
fact=1
for(i in 1:x)
  fact<-i*fact
print(paste("The factorial is",fact))


#################################################################error

x<-10
for(i in 1:x){
  count=0
  c<-2:i-1
  for (j in c) {
    if(i%%j==FALSE)
      count=count+1
  }
if(count==FALSE)
  print(i)
}


x<-123
n<-x
rev=0
while(n!=0)
{
  rem=n%%10
  rev=(rev*10)+rem
  n=as.integer(n/10)
}
print(rev)
if(rev == x)
  cat("palindrome")
else
  cat("NotPalindrome")


  ##############################
r<-as.integer(readline(prompt="enter number"))

v4<-c(1:10)
v5<-c(1:10)
v6<-c(1:5)
intersect(v6,v5) ##Comman
setequal(v5,v4) 

##Determinat
v7<-c(2,3,4,6,7,1,2,9,8)
m1<-matrix(v7,nrow=3)
print(m1)
det(m1)

###
c<-c("a","b","c")
c2<-c("a","f","e")
print(setdiff(c2,c))

###Merge data frame
df1<-data.frame(c1=c(1:6),c2=c(5:10))
df2<-data.frame(c1=c(15:20),c4=c(1:6))
m<-merge(df1,df2,by.x="c1",by.y = "c4")
print(m)

                    Or
df<-data.frame(co1=c(1,2,3),c2a=c(3,5,6))
df2<-data.frame(co1=c(1,2,3),c2b=c(1,2,4))
d<-merge(df,df2,by="co1")

##################8
r<-read.csv(file.choose(),header = TRUE)
barplot(names.arg=r$Weight, r$Age,
        col=rainbow(length(r$Age)),
        main="graph",
        xlab="Weight",ylab="Age")
png("a.png")
dev.off()

##########9
######z


####TTTTTT####
t<-t.test(r$Age,r$Weight,alternative="greater",var.equal = TRUE)
                    OR
t<-t.test(r$Age,r$Weight)

##########boxplot
boxplot(df,main="Boxplot")

v1<-c(1:5)
v2<-c(6:10)
v3<-c(11:15)
df<-data.frame(cbind(v1,v2,v3))
df
##########bargraph of data frame
barplot(as.matrix(df),col=rainbow(length(df)),)
######Anova
ano<-stack(df)
ano<-aov(values~ind,data=ano)

####corrplot
library(corrplot)
m=cor(mtcars)
corrplot(m,method="number")

#######lm
a<-lm(r$Age~r$Weight)

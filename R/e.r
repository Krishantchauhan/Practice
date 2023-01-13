a<-2^5
print(a)


b<-c(23,27,23,21,34)
print(b)

names(b)<-c("m","t","w","t","f")
print(b)

print(mean(b))
over.23<- b>23
print(b[over.23])

print(max(b))
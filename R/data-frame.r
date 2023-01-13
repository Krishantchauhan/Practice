# print(state.x77)
# data()

# Some made up weather data
days <- c('mon','tue','wed','thu','fri')
temp <- c(22.2,21,23,24.3,25)
rain <- c(TRUE, TRUE, FALSE, FALSE, TRUE)

#creating a data frame
df <- data.frame(days,temp,rain)
print(df)

print(str(df))

####### Indexing and Selection

# Everything from first row
print(df[1,])

#Everything from first column
print(df[,1])

# Grab Friday data
print(df[5,])

##### Selecting using column names

# All rain values
print(df[,'rain'])

# First 5 rows for days and temps
print(df[1:5,c('days','temp')])

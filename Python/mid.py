import numpy as np

a=np.random.randint(10,20,5)
n=np.array(a)
print(a)
a=np.random.randint(1,10,9)
m1=np.mat(a.reshape(3,3))
m2=np.mat(a.reshape(3,3))
print(m1,m2)

print(m1.dot(m2))

import pandas as pd
#Series
num=range(1,4)
s=pd.Series(num,index=['a','b','c'])
print(s['b'])

#DataFrames 
d={'name':['krish','krishant','siy'],
   'course':['bca','mca','smile'],
   'roll_no':[29,32,77]}

df=pd.DataFrame(d,columns=['name','course','roll_no'])

print(df)
import pandas as pd
import numpy as np
mat=np.arange(1,17)
# mat=
df1=pd.DataFrame(mat.reshape(4,4),index='a b c d'.split(),columns='X y z a'.split())
print(df1)
print(df1.describe())




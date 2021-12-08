import pandas as pd
data = [
    [10,
     'Azmat',
     30],
    [20,
     'Khan',
     40],
    [20,
     'Torvalds',
     70],
    [40,
     'chiho',
     80]
]
df = pd.DataFrame(data,columns=['First','Second','Last'])
#df_new = df['First'] + df['Last'] 
print (df)
print ()
print (df['First'])
print ()
print (df['Last'])
print ()
a = df['First'].append(df['Last'])

#df['SUM'] = pd.concat([df['First'],df['Last']],axis=0)
print(a)
print("평균은")
print (a.mean())
print (a.std())

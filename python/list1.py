import random

l=[]
odd=[]
even=[]

for i in range(10):
    
    l.append(random.randint(1,100))

for i in l:
    if i%2==0:
        even.append(i)
    else:
        odd.append(i)

print(l)
print(odd)
print(even)
        
        

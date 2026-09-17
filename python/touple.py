t=(1,2,3,3.3,2.2,"Arya",[100,200,300],True,False,10)

print(t)
print(t.count(1))
print(t.index(10))
print(t[5])
t[5].append(400)
print(t)

for i in t:
    print(i)

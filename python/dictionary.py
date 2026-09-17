d={101:"Arya",323:"jay",125:"ved",234:"jesil"}

print(d)
print(d[323])
print(d.get(101))
print(d.items())
d.pop(125)
print(d)
d.popitem()
print(d)
d1={567:"patel",222:"abc"}
d.update(d1)
print(d)
print(d.values())
for i in d:
    print(i," : ",d[i])

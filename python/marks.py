rno = int(input("Enter a number"))
sname=input("enter a name")
s1=int(input("enter a marks s1"))
s2=int(input("enter a marks s2"))
s3=int(input("enter a marks s3"))

 total = s1+s2+s3
per= total/3

print("roll no:" ,rno)
print("enter name :" ,sname)
print("total:" ,total)
print("percantage:" ,per)

 if per>70:
 print("grade A")
elif per>60:
print("grade B")
elif per>50:
print("grade c")
                  elif per>40:
                 print("grade D")
                 else:
                     print("fail")
                 
                 

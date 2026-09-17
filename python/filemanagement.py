file=open("tops1.txt","w")
file.write("this is file management demo using python")
file.close()
print("file written successfully")
print("*",*50)

file=open("tops1.txt","r")
print(file.read())
file.close()
print("*"*50)

file=open("tops1.txt","a")
file.write("\n this is file now appended.")
file.close()
print("*"*50)

file=open("tops2.txt","w+")
file.write("this is w+ mode using python.")
print("current file position",file.tell())
file.seek(3)
print("file data: ",file.read())
file.close()



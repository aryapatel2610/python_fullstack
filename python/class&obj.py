class Student:

    def getdata(self,fname,lname):
        self.f=fname
        self.l=lname
    def putdata(self):
        print("first name:" ,self.f)
        print("last namr :",self.l)

s1=Student()
s1.getdata("Arya","patel")
s1.putdata()

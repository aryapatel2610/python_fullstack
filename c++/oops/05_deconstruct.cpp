#include<iostream>
#include<string.h>
using namespace std;

class Student{
	private:
		int rollno;
		char name[30];
	public :
		Student(int r,const char name1[30])
		{
			
			rollno = r;
		    strcpy(name,name1);
		   
		    
		}
		Student(Student &aa)
		{
			rollno = aa.rollno;
			strcpy(name,aa.name);
		}
		~Student()
		{
			cout<<"\n constructor destrected!!!";
		}
		Display()
		{
			cout<<"\n roll no :"<<rollno;
			cout<<"\n name :"<<name;
		}
};
int main()
{
	Student s1(12,"jaylo");
	s1.Display();
	Student s2(s1);
	s2.Display();
	
	return 0;
}

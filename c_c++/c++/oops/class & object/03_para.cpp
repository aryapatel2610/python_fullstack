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
	
	return 0;
}

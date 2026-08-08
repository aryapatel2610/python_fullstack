#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		char name[30];
	public :
		Student()
		{
			cout<<"enter your roll no :";
			cin>>rollno;
			cin.ignore();
			cout<<"\n enter your name :";
			cin>>name;	
		}
		Display()
		{
			cout<<"roll no :"<<rollno;
			cout<<"name :"<<name;
		}
};
int main()
{
	Student s1;
	s1.Display();
	
	return 0;
}

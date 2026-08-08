#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		string name;
	public :
		Student()
		{
			cout<<"enter your roll no :";
			cin>>rollno;
			cin.ignore();
			cout<<"\n enter your name :";
		
			getline(cin,name);	
		}
		Display()
		{
			cout<<"\n roll no :"<<rollno;
			cout<<"\n name :"<<name;
		}
};
int main()
{
	Student s1;
	s1.Display();
	
	return 0;
}

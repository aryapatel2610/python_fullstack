#include<iostream>
using namespace std;

int main(){
	
	int a,b,c,total;
	 
	 cout<<"Enter a: ";
	 cin>>a;
	 
	 cout<<"Enter b: ";
	 cin>>b;
	 
	 cout<<"Enter c: ";
	 cin>>c;
	 
	 total = a+b+c/3;
	 
	 if((a>=33 && b>=33 && c>=33) && (a<=100 && b<=100 && c<=100))
	 {
	 	if(total<=100 || total>=85)
	 	{
	 		cout<<"grade A";
		 }
		else if(total<=84 || total>=60)
		{
			cout<<"grade B";
		}
		else if(total<=59|| total>=33)
		{
			cout<<"grade c";
		}
	
	 }
	 	else
		{
			cout<<"fail";
		}
	 
	return 0;
}

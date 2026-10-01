#include<iostream>
using namespace std;
 
 class Over{
 	public:
 	     void display(int a){
 	     	cout<<" value of A: " <<a;
		  }
		  void display(int a,int b){
		  	cout<<"\n value of sum: "<<a+b;
		  }
 };


int main(){
	
	Over ob;
	 ob.display(80);
	 ob.display(40,60);
	return 0;
}

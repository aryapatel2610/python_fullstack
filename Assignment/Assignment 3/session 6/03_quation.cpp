#include<iostream>
#include<string>
using namespace std;

class Product{
	public:
    virtual void upload() = 0;
};

class Electronics:public Product{
	public:
		void upload(){
			cout<<"this is Electronic shop"<<endl;
	}
};

class Clothing:public Product{
	public:
		void upload(){
			cout<<"this is Cloths store"<<endl;
		}
}; 

int main(){
	Clothing c;
	c.upload();
	
	Electronics e;
	e.upload();
	
	
	
	return 0;
}

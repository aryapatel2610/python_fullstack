#include<iostream>
#include<string.h>
using namespace std;

class Flipkart{
	public:
		void searchProduct(string productName){
			cout<<"this is Product Name :"<<productName<<endl;
		}
		void searchProduct(string productName,string category){
			cout<<"this is Product Name also 1 :"<<productName<<endl;
			cout<<"this is Product category :"<<category<<endl;
		}
};

int main(){
	
	Flipkart f;
	f.searchProduct("HPlapi");
	f.searchProduct("HPlapi","Laptop");
	
	return 0;
}

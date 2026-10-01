#include<iostream>
using namespace std;
 
 class Ab {
 	  protected :
 	  	int money =500;
 	  	public:
 	  		
 	  void display(){
 	  	cout<<"\n money :" <<money;
 	  	
	   }
 };
class Child : public Ab {
	  public:
	  	void data(){
	  		cout<<"\n child money :"<<money;
		  }
};


int main(){
	
	Child ob;
	ob.data();
	ob.display();
	return 0;
}

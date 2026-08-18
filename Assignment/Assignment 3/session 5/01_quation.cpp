#include<iostream>
using namespace std;


class Java{
	public:
	
				
		void processpyment(float amount){
			cout<<"this is Your Amout :"<<amount;			
		}
		
		void processpyment(float amount,float coupuncode){
			cout<<"with Discout prise:"<<coupuncode<<endl;
			float finalamount = amount - coupuncode;
			cout<<"This is Final amount:"<<finalamount;
		}
};



int main(){
	
	Java j;
	j.processpyment(1000);
	cout<<endl;
	j.processpyment(1000,100);
	
	return 0;
}

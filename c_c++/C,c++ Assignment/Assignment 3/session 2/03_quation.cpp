#include<iostream>
#include<string.h>
using namespace std;

class FoodOrder{
	private:
		int  orderId;
		string restaurantName;
		bool isDelivered;
	public:
		void member(){
			cout<<"enter Restaurant Name :";\
			cin>>restaurantName;
			cout<<"order Id :";
			cin>>orderId;	
			
			isDelivered = true;
		}
		void markDelivered(){
			isDelivered == true;
				cout<<"Order is delivered successfully.";
		}
		void display(){
			cout<<"Restaurant Name :"<<restaurantName<<endl;
			cout<<"order Id :"<<orderId<<endl;
			cout<<"Is Delivered: "<<isDelivered<<endl;
		}
	
};

int main(){
	
	FoodOrder f;
	
	f.member();
	f.markDelivered();
	f.display();
	
	
	return 0;
}

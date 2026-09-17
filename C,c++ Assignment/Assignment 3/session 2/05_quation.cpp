#include<iostream>
#include<string>
using namespace std;

struct OrderData{
	int orderId;
	string restaurantName;
	bool isDelivered;
};

class FoodOrder{
	private:
		int orderId;
		string restaurantName;
		bool isDelivered;
		
	public:
		
		FoodOrder(OrderData data){
			orderId = data.orderId;
			restaurantName = data.restaurantName;
			isDelivered = data.isDelivered;
		}
		
		void display(){
			cout<<"Order ID: "<<orderId<<endl;
			cout<<"Restaurant Name: "<<restaurantName<<endl;
			cout<<"Is Delivered: "<<isDelivered<<endl;
		}
};

int main(){
	
	OrderData data = {1020, "dominoz", true};
	
	FoodOrder f(data);
	
	f.display();
	
	return 0;
}

#include<iostream>
using namespace std;

class Arya{
	private :
		int money = 500;
		public :
			void xyz(Arya a);
};
void xyz(Arya a){
	cout<<"\Arya your money :"<<a.money;
}
int main(){
	
	Arya ob;
	xyz(ob);
       return 0;
}

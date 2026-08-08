#include<iostream>
using namespace std;

class Shubham{
	private:
		int money = 500;
	public:
		friend class Abhi;
	
};
class Abhi: public Shubham{
	public:
		void demo(Shubham s){
			cout<<"Abhi your money : "<<s.money;
		}
};


int main()
{
	Shubham s1;
	Abhi ob;
	ob.demo(s1);

	return 0;
} 

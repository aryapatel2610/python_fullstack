#include<iostream>
using namespace std;

class Riding{
	public:
	void display(){
		cout<<"\n class A";
	}

};
class B : public Riding {
	public:
		void display(){
			cout<<"\n class B";
		}
};

int main(){
	
	B ob;
	ob.display();
	ob.display();
	
	
	return 0;
}

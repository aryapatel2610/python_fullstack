#include<iostream>
#include<string.h>
using namespace std;

class Instastory{
	protected :
		int storyview;
	public:
		void put(){
			cout<<"enter a story views :";
			cin>>storyview;
		}
};

class SponsoredStory:public Instastory{
	public:
		void display(){
			cout<<"This is a Story Views : "<<storyview;
		}
};

int main(){
	
	SponsoredStory s;
	s.put();
	s.display();
	
	return 0;
}

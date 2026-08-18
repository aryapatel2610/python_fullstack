#include<iostream>
#include<string.h>
using namespace std;

class Content{
	private:
		string title;
		int platform;
		int views;
		int status;
	public:
		void put(){
			cout<<"enter a Content Title :";
			cin>>title;
			cout<<"which platform (youtube 1/instagram 2)? :";
			cin>>platform;
			cout<<"enter your reel/video views :";
			cin>>views;
			cout<<"status (panding 1/Published 2) :";
			cin>>status;
		}
		
		void display(){
			
			cout<<"\n\n";
			cout<<"Your Title is :"<<title<<endl;
			
			if(platform == 1){
				cout<<"platform : Youtube"<<endl;
			}
			else if(platform == 2){
				cout<<"platform : Instagram"<<endl;
			}
			else{
				cout<<"invalid output"<<endl;
			}
			
			cout<<"Your Content Viwe :"<<views<<endl;
			
			if(status == 1){
				cout<<"Status : Panding"<<endl;
			}
			else if(status == 2){
				cout<<"Status : PUblished"<<endl;
			}
			else{
				cout<<"Status : invalid output"<<endl;
			}
		}
	
};

int main(){
	
	Content c;
	c.put();
	c.display();
	
	return 0;
}

#include<iostream>
#include<string.h>
using namespace std;

class Playlist{
	private:
		string name;
		string createdOn;
		bool isPublic;
	public:
		void put(){
			cout<<"enter a Song Name :";
			cin>> name;
			cout<<"enter a Song createdOn :";
			cin>>createdOn;
			cout<<"enter a Song isPublic (1 true /0 false):";
			cin>>isPublic;
			
		}
		
		void togglePublic(){
			isPublic = !isPublic;	
		}
		
		void display(){
			cout<<"\n\n";
			cout<<"enter a Song Name :"<<name<<endl;
			cout<<"enter a Song createdOn :"<<createdOn<<endl;
			if(isPublic == true){
				cout<<"isPublic Yes:"<< true ;
			} 
			else{
				cout<<"isPublic No:"<<false;
			}
		}
		
};

int main(){
	
	Playlist p;
	p.put();
	p.togglePublic();
	p.display();
	
	return 0;
}

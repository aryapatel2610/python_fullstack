#include<iostream>
#include<string.h>
using namespace std;

class Playlist{
	private:
		string name;
		string createdOn;
		bool isPublic;
		string songs[50];
		int songCount;
	public:
		Playlist(){
			songCount = 0;
		}
		void put(){
			cout<<"Enter Playlist Name: ";
			cin>>name;
			
			cout<<"Enter Created On: ";
			cin>>createdOn;
			
			cout<<"Enter Is Public (1/0): ";
			cin>>isPublic;
		}
		void addSong(string songTitle){
			songs[songCount] = songTitle;
			songCount++;
		}
		void display(){
			cout<<"\nPlaylist Name: "<<name<<endl;
			cout<<"Created On: "<<createdOn<<endl;
			cout<<"Is Public: "<<isPublic<<endl;
			
			cout<<"\nUpdated Songs List:"<<endl;
			
			for(int i=0; i<songCount; i++){
				cout<<i+1<<". "<<songs[i]<<endl;
			}
		}
		
};

int main(){
	
	Playlist p;
	
	p.put();
	
	p.addSong("Kesariya");
	p.addSong("Chaleya");
	p.addSong("Apna Bana Le");
	
	p.display();
	
	return 0;
}

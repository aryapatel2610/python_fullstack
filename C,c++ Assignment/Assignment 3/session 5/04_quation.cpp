#include<iostream>
#include<string.h>
using namespace std;

class Musicplayer{
	public:
		void play(){
			cout<<"playing musics"<<endl;
		}
};

class Spotifyplayer:public Musicplayer{
	public:
		void play(){
			cout<<"play song into the apple music"<<endl;
		}
};

int main(){
	
	Spotifyplayer s;
	s.Musicplayer::play();
	s.play();
	
	return 0;
}

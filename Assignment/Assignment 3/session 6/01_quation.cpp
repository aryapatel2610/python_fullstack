#include<iostream>
#include<string.h>
using namespace std;

class Song{
	private:
		string title;
		string artist;
	public:

    void setTitle(string t)
    {
        title = t;
    }

    string getTitle()
    {
        return title;
    }

    void setArtist(string a)
    {
        artist = a;
    }

    string getArtist()
    {
        return artist;
    }

    void showSong()
    {
        cout << "Song Title: " << title << endl;
        cout << "Artist: " << artist << endl;
	}
};

int main(){
	
	Song s;
	s.setTitle("La Casa De  Papel");
	s.setArtist("Money Heist ");
	
	s.showSong();
	
	s.setTitle("my life is Going");
	
	s.showSong();
	
	
	return 0;
}

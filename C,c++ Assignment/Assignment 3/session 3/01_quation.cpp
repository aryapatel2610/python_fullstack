#include <iostream>
using namespace std;

class Playlist {
private:
    string playlistName;

public:
    Playlist() {
        playlistName = "My Favourites";
        cout << "Welcome to My Favourites Playlist!" << endl;
    }
};

int main() {
    Playlist p1;

    return 0;
}

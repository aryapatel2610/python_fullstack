#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string date, bool p) {
        name = n;
        createdOn = date;
        isPublic = p;
    }
};

int main() {
    Playlist playlist("My Favorite Songs", "2026-08-11", true);

    cout << "Name: " << playlist.name <<endl;
    cout << "Created On: " << playlist.createdOn <<endl;
    cout << "Is Public: " << (playlist.isPublic ? "true" : "false") <<endl;

    return 0;
}

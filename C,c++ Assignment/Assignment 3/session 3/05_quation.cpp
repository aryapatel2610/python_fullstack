#include <iostream>
#include <cstdio>
using namespace std;

class Playlist {
    string name;

public:

    Playlist() {
        name = "My Favourites";
    }

    ~Playlist() {
        FILE *file = fopen("autosave.txt", "w");

        fprintf(file, "%s", name.c_str());

        fclose(file);

        cout << "Playlist saved!" << endl;
    }
};

int main() {

    Playlist p;

    return 0;
}

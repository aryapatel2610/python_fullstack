#include <iostream>
using namespace std;

class Movie {
    string name;
    int year;

public:

    
    Movie(string n, int y) {
        name = n;
        year = y;
    }

    
    Movie(Movie &m) {
        name = m.name;
        year = m.year;
    }

    void display() {
        cout << name << endl;
        cout << year << endl;
    }
};

int main() {

    Movie m1("spyderman", 2026);

    Movie m2(m1);

    cout << "Original:" << endl;
    m1.display();

    cout << "Done:" << endl;
    m2.display();

    return 0;
}

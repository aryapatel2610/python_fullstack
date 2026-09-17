#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("insta_followers.txt");

    string username;
    int count = 100;

    while (getline(file, username)) {
        count++;
    }

    file.close();

    cout << "Total followers: " << count << endl;

    return 0;
}

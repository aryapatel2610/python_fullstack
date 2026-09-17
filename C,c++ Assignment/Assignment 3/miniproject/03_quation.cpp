#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Content {
public:
    void displayContent() {
        ifstream file("content_list.txt");

        string line;
        int count = 1;

        while (getline(file, line) && count <= 2) {
            cout << count << ". " << line << endl;
            count++;
        }

        file.close();
    }
};

int main() {
    Content c;
    c.displayContent();

    return 0;
}

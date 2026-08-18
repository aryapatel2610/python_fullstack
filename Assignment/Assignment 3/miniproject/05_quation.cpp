#include <iostream>
#include <fstream>
using namespace std;

class Content {
public:
    string title[10];
    string platform[10];
    string status[10];
    int total;

    void readFile() {
        ifstream file("content_list.txt");

        total = 0;

        while (file >> title[total] >> platform[total] >> status[total]) {
            total++;
        }

        file.close();
    }

    void display() {
        for (int i = 0; i < total; i++) {
            cout << i + 1 << ". "
                 << title[i] << " "
                 << platform[i] << " "
                 << status[i] << endl;
        }
    }

    void deleteContent() {
        int number;

        cout << "Enter content number to delete: ";
        cin >> number;

        if (number >= 1 && number <= total) {

            for (int i = number - 1; i < total - 1; i++) {
                title[i] = title[i + 1];
                platform[i] = platform[i + 1];
                status[i] = status[i + 1];
            }

            total--;

            ofstream file("content_list.txt");

            for (int i = 0; i < total; i++) {
                file << title[i] << " "
                     << platform[i] << " "
                     << status[i] << endl;
            }

            file.close();

            cout << "Content deleted!" << endl;

            cout << "\nUpdated List:\n";
            display();
        }
        else {
            cout << "Invalid number!" << endl;
        }
    }
};

int main() {

    Content c;

    c.readFile();

    cout << "Content List:\n";
    c.display();

    c.deleteContent();

    return 0;
}

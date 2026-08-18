#include <iostream>
#include <fstream>
using namespace std;

class Content {
public:
    string title[10];
    string platform[10];
    string status[10];
    int total = 0;

    void readFile() {
        ifstream file("content_list.txt");

        while (total < 10 && file >> title[total] >> platform[total] >> status[total]) {
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

    void updateStatus() {
        int choice;
        string newStatus;

        cout << "Enter content number: ";
        cin >> choice;

        if (choice >= 1 && choice <= total) {

            cout << "Enter new status: ";
            cin >> newStatus;

            status[choice - 1] = newStatus;

            ofstream file("content_list.txt");

            for (int i = 0; i < total; i++) {
                file << title[i] << " "
                     << platform[i] << " "
                     << status[i] << endl;
            }

            file.close();

            cout << "Status updated successfully!" << endl;
        }
        else {
            cout << "Invalid content number!" << endl;
        }
    }
};

int main() {

    Content c;

    c.readFile();

    cout << "Content List:" << endl;
    c.display();

    c.updateStatus();

    return 0;
}

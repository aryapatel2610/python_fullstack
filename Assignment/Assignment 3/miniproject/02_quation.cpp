#include <iostream>
#include <fstream>
using namespace std;

class Content {
private:
    string title;
    string platform;
    int views;
    string status;

public:

    void addContent() {
        cout << "Enter Content Title: ";
        cin >> title;

        cout << "Enter Platform: ";
        cin >> platform;

        cout << "Enter Views: ";
        cin >> views;

        cout << "Enter Status: ";
        cin >> status;

        ofstream file("content_list.txt", ios::app);

        file << "Title: " << title << endl;
        file << "Platform: " << platform << endl;
        file << "Views: " << views << endl;
        file << "Status: " << status << endl;
        file << "------------------------" << endl;

        file.close();

        cout << "Content Saved Successfully!" << endl;
    }

    void menu() {
        int choice;

        do {
            cout << "\n===== CONTENT MENU =====" << endl;
            cout << "1. Add Content" << endl;
            cout << "2. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                addContent();
            }
            else if (choice == 2) {
                cout << "Program Ended.";
            }
            else {
                cout << "Invalid Choice!";
            }

        } while (choice != 2);
    }
};

int main() {

    Content c;

    c.menu();

    return 0;
}

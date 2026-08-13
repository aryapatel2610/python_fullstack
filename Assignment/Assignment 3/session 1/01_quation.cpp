#include <iostream>
#include <string>
using namespace std;


string tasks[5];
int count = 0;

int main() {
    cout << "Enter 5 tasks:\n";

    for (int i = 0; i < 5; i++) {
        getline(cin, tasks[i]);
        count++;
    }

    cout << "\nTasks:\n";

    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }

    return 0;
}

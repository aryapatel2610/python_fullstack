#include <iostream>
#include <string>
using namespace std;

string tasks[5];
bool done[5] = {false};

void markTaskDone(int index) {
    if (index >= 0 && index < 5) {
        done[index] = true;
    }
}

int main() {
    cout << "Enter 5 tasks:\n";

    for (int i = 0; i < 5; i++) {
        getline(cin, tasks[i]);
    }

  

    cout << "\nUpdated Tasks:\n";

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << tasks[i];

        if (done[i]) {
            cout << " - DONE";
        }

        cout << endl;
    }

    return 0;
}

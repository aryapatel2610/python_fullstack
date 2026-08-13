#include <iostream>
#include <string>
using namespace std;

class Task {
public:
    string title;
    bool isDone;

    Task(string t) {
        title = t;
        isDone = false;
    }

    void markDone() {
        isDone = true;
    }

    void display() {
        cout << title;

        if (isDone)
            cout << " done";
        else
            cout << " not done";

        cout << endl;
    }
};

int main() {
  Task task("Complete homework");

    task.display();

    task.markDone();

    task.display();

    return 0;
}

#include <iostream>
using namespace std;

class Ticket {
public:

    Ticket() {
        cout << "Ticket booked!" << endl;
    }

  
    ~Ticket() {
        cout << "Saving your ticket..." << endl;
    }
};

int main() {

    Ticket t;
   

    return 0;
}

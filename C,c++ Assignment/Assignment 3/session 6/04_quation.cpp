#include <iostream>
using namespace std;

class UserProfile
{
private:
    string phoneNumber;

public:

    void setPhoneNumber(string number)
    {
        phoneNumber = number;
    }

    string getPhoneNumber()
    {
        return phoneNumber;
    }
};

int main()
{
    UserProfile u1;

    u1.setPhoneNumber("1234567890");

    cout << "Phone Number: " << u1.getPhoneNumber() << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

class InstagramInfluencer : public SocialMediaUser {
public:
    void postStory(string storyTitle) {
        cout << username << " posted a new story: "
             << storyTitle << endl;
    }
};

int main() {
    InstagramInfluencer person;

    person.username = "Arya";
    person.followers = 3000;

    person.displayProfile();
    person.postStory("My New Story");

    return 0;
}

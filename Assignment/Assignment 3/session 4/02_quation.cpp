#include <iostream>
#include <string>
using namespace std;

class SocialMediaUser {
public:
    string username;
    int followers;

    SocialMediaUser(string user, int count) {
        username = user;
        followers = count;
    }

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
    }
};

class YouTuber : public SocialMediaUser {
public:
    string channelName;

    YouTuber(string user, int count, string channel)
        : SocialMediaUser(user, count) {
        channelName = channel;
    }

    void uploadVideo(string title) {
        cout << "Video " << title << " uploaded to "
             << channelName << endl;
    }
};

int main() {
    YouTuber youtuber("Arya", 1500, "Arya Channel");

    youtuber.displayProfile();
    youtuber.uploadVideo("C++ Tutorial");

    return 0;
}

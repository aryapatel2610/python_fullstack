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

class Podcaster : public SocialMediaUser {
public:
    string podcastName;

    Podcaster(string user, int count, string podcast)
        : SocialMediaUser(user, count) {
        podcastName = podcast;
    }

    void publishEpisode(string episodeTitle) {
        cout << "Episode " << episodeTitle
             << " published on " << podcastName << endl;
    }
};

int main() {
    Podcaster podcaster("Arya", 1500, "Arya Podcast");

    podcaster.displayProfile();
    podcaster.publishEpisode("My First Episode");

    return 0;
}

#include <stdio.h>
#include<conio.h>

struct playlist {
    char title[50];
    char artist[50];
    int duration;
};

int main() {
    struct playlist song = {
        "Tum Hi Ho",
        "Arijit Singh",
        262
    };

    printf("Song Title: %s\n", song.title);
    printf("Artist: %s\n", song.artist);
    printf("Duration: %d seconds\n", song.duration);

    return 0;
}

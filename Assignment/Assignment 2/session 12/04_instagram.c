#include <stdio.h>
#include<conio.h>

struct Bio {
    char description[100];
    int age;
};

struct InstaProfile {
    char username[50];
    int followers;
    struct Bio bio;
};

int main() {
    struct InstaProfile profile = {
        "Arya_patel",
        5000,
        {"bgmi athlet", 21}
    };

    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Bio Description: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);

    return 0;
}

#include <stdio.h>
#include<conio.h>
#include <string.h>

int main() {
    char fullName[100];
    char username[20];

    printf("Enter your full name: ");
    scanf("%s", fullName);

    if (strlen(fullName) < 20) {
        strcpy(username, fullName);
    } else {
        strncpy(username, fullName, 20);
        username[20] = '\0';
    }

    printf("Generated username: %s\n", username);

    return 0;
}

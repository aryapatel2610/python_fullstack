#include <stdio.h>
#include<conio.h>
#include <string.h>

int main() {
    char username1[50], username2[50];

    printf("Enter first username: ");
    scanf("%s", username1);

    printf("Enter second username: ");
    scanf("%s", username2);

    if (strcmp(username1, username2) == 0) {
        printf("The username are the same.\n");
    } else {
        printf("The username are different.\n");
    }

    return 0;
}

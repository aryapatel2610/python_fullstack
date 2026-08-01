#include <stdio.h>
#include<conio.h>
#include <ctype.h>


void capitalizeFirstLetter(char str[]) {
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }
}

int main() {
    char productName[] = "laptop";
    char username[] = "Arya";

    printf("Before capitalization:\n");
    printf("Product: %s\n", productName);
    printf("Username: %s\n", username);

  
    capitalizeFirstLetter(productName);
    capitalizeFirstLetter(username);

    printf("\nAfter capitalization:\n");
    printf("Product: %s\n", productName);
    printf("Username: %s\n", username);

    return 0;
}

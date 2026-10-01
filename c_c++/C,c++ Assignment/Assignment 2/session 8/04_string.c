#include <stdio.h>
#include <string.h>

void addToCart(char cart[][50], int *size, const char productName[]) {
    
    strcpy(cart[*size], productName);
    (*size)++;

    printf("Updated Cart:\n");
     for (int i = 0; i < *size; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main() {
    char cart[10][50] = {"Laptop", "Mouse"};
    int cartSize = 2;

    printf("Original Cart:\n");
    for (int i = 0; i < cartSize; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    addToCart(cart, &cartSize, "Keyboard");

    printf("\nCart after function call:\n");
    for (int i = 0; i < cartSize; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    return 0;
}

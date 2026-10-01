#include <stdio.h>
#include<conio.h>

int main() {
    int orders[5] = {250, 450, 300, 150, 500};
    int *ptr = orders;

    for (int i = 0; i < 5; i++) {
        printf("Order Amount: %d\n", *ptr);
        printf("Memory Address: %p\n\n", ptr);

        ptr++; 
    }

    return 0;
}

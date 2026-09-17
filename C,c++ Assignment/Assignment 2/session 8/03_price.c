#include <stdio.h>
#include <string.h>
#include<conio.h>

char* formatPrice(int price) {
    static char formatted[50];
    char temp[50];
    
    sprintf(temp, "%d", price);

    int len = strlen(temp);
    int commaCount = 0;
    int index = 0;

    
    formatted[index++] = '?';

    
    for (int i = 0; i < len; i++) {
        if (len - i == 4 || (len - i > 4 && (len - i) % 2 == 0)) {
            formatted[index++] = ',';
        }
        formatted[index++] = temp[i];
    }

    formatted[index] = '\0';

    return formatted;
}

int main() {
    int laptopPrice = 55999;
    int mobilePrice = 15999;
    int headphonePrice = 1599;

    printf("Product Prices:\n");
    printf("Laptop: %s\n", formatPrice(laptopPrice));
    printf("Mobile: %s\n", formatPrice(mobilePrice));
    printf("Headphones: %s\n", formatPrice(headphonePrice));

    return 0;
}

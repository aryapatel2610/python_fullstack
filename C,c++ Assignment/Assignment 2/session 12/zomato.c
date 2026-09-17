#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    struct FoodItem menu[3] = {
        {"Margherita Pizza", 299.00, 4.5},
        {"Veg Burger", 149.00, 4.2},
        {"Paneer Biryani", 249.00, 4.7}
    };

    for (int i = 0; i < 3; i++) {
        printf("Item Name: %s\n", menu[i].itemName);
        printf("Price: %.2f\n", menu[i].price);
        printf("Rating: %.1f\n\n", menu[i].rating);
    }

    return 0;
}

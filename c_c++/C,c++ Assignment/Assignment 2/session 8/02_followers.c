#include <stdio.h>
#include<conio.h>



void increaseFollowersByValue(int followers) {
    followers += 1000;
    printf("Inside increaseFollowersByValue: %d\n", followers);
}


void increaseFollowersByReference(int *followers) {
    *followers += 1000;
    printf("Inside increaseFollowersByReference: %d\n", *followers);
}

int main() {
    int followers = 5000;

    printf("Original followers count: %d\n", followers);

   
    increaseFollowersByValue(followers);

    printf("After pass-by-value call: %d\n", followers);

   
    increaseFollowersByReference(&followers);

    printf("After pass-by-reference call: %d\n", followers);

    return 0;
}

#include <stdio.h>
#include<conio.h>

int main() {
    int likes = 100;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Value of likes: %d\n", likes);
    printf("Value stored at ptrLikes: %d\n", *ptrLikes);
    printf("Address stored in ptrLikes: %p\n", ptrLikes);

    return 0;
}

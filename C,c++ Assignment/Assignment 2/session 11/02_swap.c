#include <stdio.h>
#include<conio.h>

void swapPlaylistCounts(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int playlist1 = 50;
    int playlist2 = 120;

    printf("Before swapping:\n");
    printf("Playlist 1 songs: %d\n", playlist1);
    printf("Playlist 2 songs: %d\n", playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("\nAfter swapping:\n");
    printf("Playlist 1 songs: %d\n", playlist1);
    printf("Playlist 2 songs: %d\n", playlist2);

    return 0;
}

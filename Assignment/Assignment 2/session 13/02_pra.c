#include <stdio.h>
#include<conio.h>

int main() {
    FILE *fp;
    char song[100];

    fp = fopen("playlist.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(song, sizeof(song), fp) != NULL) {
        printf("%s", song);
    }

    fclose(fp);

    return 0;
}

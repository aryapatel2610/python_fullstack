#include <stdio.h>
#include<conio.h>

int main() {
    FILE *fp;

    fp = fopen("playlist.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Tum Hi Ho\n");
    fprintf(fp, "Kesariya\n");
    fprintf(fp, "Perfect\n");

    fclose(fp);

    printf("Songs written successfully to playlist.txt\n");

    return 0;
}

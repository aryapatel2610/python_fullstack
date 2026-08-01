#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char song[100], lowerSong[100];
    int i;

    fp = fopen("playlist.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(song, sizeof(song), fp) != NULL) {

    
        for (i = 0; song[i] != '\0'; i++) {
            lowerSong[i] = tolower((unsigned char)song[i]);
        }
        lowerSong[i] = '\0';

        if (strstr(lowerSong, "love") != NULL) {
            printf("%s", song);
        }
    }

    fclose(fp);

    return 0;
}

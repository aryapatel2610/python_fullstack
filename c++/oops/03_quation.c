#include <stdio.h>

int main() {
    FILE *file;
    int minutes;

    file = fopen("music_log.txt", "a");

    if (file == NULL) {
        printf("Error: Could not open music_log.txt\n");
        return 1;
    }

 
    printf("Enter the number of minutes you listened to music today: ");
    scanf("%d", &minutes);

  
    fprintf(file, "Listening Minutes: %d\n", minutes);

   
    fclose(file);

    printf("Your listening time has been saved to music_log.txt\n");

    return 0;
}

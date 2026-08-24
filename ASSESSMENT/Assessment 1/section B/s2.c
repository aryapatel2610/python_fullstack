#include <stdio.h>
#include<conio.h>

int main() {
    float study[7];
    float total = 0, average;
    float highest;
    int highestDay = 0;
    int i, j;

    for (i = 0; i < 7; i++) {
        while (1) {
            printf("Enter study hours for Day %d: ", i + 1);
            scanf("%f", &study[i]);

            if (study[i] >= 0 && study[i] <= 24) {
                break;
            }
            else {
                printf("Invalid hours! Enter a value between 0 and 24.\n");
            }
        }
    }

  
    highest = study[0];

    for (i = 0; i < 7; i++) {
        total = total + study[i];

        if (study[i] > highest) {
            highest = study[i];
            highestDay = i;
        }
    }

    average = total / 7;

    printf("\n Performance Summary \n");
    printf("Weekly Total Hours : %.2f\n", total);
    printf("Daily Average      : %.2f\n", average);
    printf("Most Studied Day   : Day %d (%.2f hours)\n",
           highestDay + 1, highest);

  
    printf("\nStudy Chart:\n");

    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);

        for (j = 0; j < (int)study[i]; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

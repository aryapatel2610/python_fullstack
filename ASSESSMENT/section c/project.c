#include <stdio.h>
#include<conio.h>

struct StudyLog {
    char subject[40];
    float hours[7];
};


void weeklyReport(struct StudyLog logs[], int n) {
    float total, average;
    int i,j;

    printf("\n Weekly Report \n");

    for (i = 0; i < n; i++) {
        total = 0;

        for ( j = 0; j < 7; j++) {
            total += logs[i].hours[j];
        }

        average = total / 7;

        printf("\nSubject: %s\n", logs[i].subject);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", average);
    }
}


void progressChart(struct StudyLog logs[], int n) 
     {
     	int i,j,k;
    printf("\n Progress Chart \n");

    for ( i = 0; i < n; i++) {
        printf("\n%s\n", logs[i].subject);

        for ( j = 0; j < 7; j++) {
            printf("Day %d: ", j + 1);

            int dots = (int)logs[i].hours[j];

            for ( k = 0; k < dots; k++) {
                printf("*");
            }

            printf("\n");
        }
    }
}


void saveToFile(struct StudyLog logs[], int n) {
    FILE *file;
    int i,j;

    file = fopen("productivity_log.txt", "w");

    if (file == NULL) {
        printf("Unable to open file!\n");
        return;
    }

    for ( i = 0; i < n; i++) {
        fprintf(file, "%s", logs[i].subject);

        for ( j = 0; j < 7; j++) {
            fprintf(file, ",%.2f", logs[i].hours[j]);
        }

        fprintf(file, "\n");
    }

    fclose(file);

    printf("Data saved successfully to productivity_log.txt\n");
}


int main() {
    struct StudyLog logs[3] = {
        {"Programming", {0}},
        {"Mathematics", {0}},
        {"Physics", {0}}
    };

    int choice;

    while (1) {

        printf("\n Student Productivity Tracker \n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
                   int i,j;
            case 1:
                printf("\nEnter study hours for each subject:\n");

                for ( i = 0; i < 3; i++) {
                    float hour;

                    printf("%s: ", logs[i].subject);
                    scanf("%f", &hour);

                    if (hour < 0) {
                        printf("Invalid hours! Entering 0 instead.\n");
                        hour = 0;
                    }

                    
                    for ( j = 0; j < 7; j++) {
                        if (logs[i].hours[j] == 0) {
                            logs[i].hours[j] = hour;
                            break;
                        }
                    }
                }

                printf("Today's study hours logged successfully.\n");
                break;


            case 2:
                weeklyReport(logs, 3);
                progressChart(logs, 3);
                break;


            case 3:
                saveToFile(logs, 3);
                printf("Exiting program...\n");
                return 0;


            default:
                printf("Invalid option! Try again.\n");
        }
    }

    return 0;
}


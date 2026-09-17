#include <stdio.h>
#include<conio.h>

#define DAYS 7

int main()
{
    int music[DAYS] = {0};
    int count = 0;
    int choice;
    int minutes;
    int total, highest, days;
    float average;
    int i;
    char confirm;
    FILE *fp;

    do
    {
        printf("\n Music Listening Logger \n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Report\n");
        printf("3. Reset Weekly Data\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (count < DAYS)
            {
                printf("Enter minutes listened for Day %d: ", count + 1);
                scanf("%d", &minutes);

                music[count] = minutes;
                count++;

                fp = fopen("music_log.txt", "a");

                if (fp != NULL)
                {
                    fprintf(fp, "%d\n", minutes);
                    fclose(fp);
                }

                printf("Data saved successfully.\n");
            }
            else
            {
                printf("Weekly limit completed.\n");
            }
        }

        else if (choice == 2)
        {
            fp = fopen("music_log.txt", "r");

            if (fp == NULL)
            {
                printf("No data available.\n");
            }
            else
            {
                total = 0;
                highest = 0;
                days = 0;

                while (fscanf(fp, "%d", &minutes) != EOF)
                {
                    total = total + minutes;

                    if (minutes > highest)
                    {
                        highest = minutes;
                    }

                    days++;
                }

                fclose(fp);

                if (days > 0)
                {
                    average = (float)total / days;

                    printf("\n===== Weekly Report =====\n");
                    printf("Total Minutes: %d\n", total);
                    printf("Average Minutes: %.2f\n", average);
                    printf("Highest Minutes: %d\n", highest);
                }
                else
                {
                    printf("No records found.\n");
                }
            }
        }

        else if (choice == 3)
        {
            printf("Are you sure you want to reset data? (Y/N): ");
            scanf(" %c", &confirm);

            if (confirm == 'Y' || confirm == 'y')
            {
                
                for (i = 0; i < DAYS; i++)
                {
                    music[i] = 0;
                }

                count = 0;

                
                fp = fopen("music_log.txt", "w");

                if (fp != NULL)
                {
                    fclose(fp);
                }

                printf("Weekly data reset successfully.\n");
            }
            else
            {
                printf("Reset cancelled.\n");
            }
        }

        else if (choice == 4)
        {
            printf("Exiting Music Logger...\n");
        }

        else
        {
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}

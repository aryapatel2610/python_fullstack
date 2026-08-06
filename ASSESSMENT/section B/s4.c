#include <stdio.h>

struct Expense {
    char category[30];
    float amount;
};

int main() {
    struct Expense expenses[10];
    int count = 0;
    int choice;
    float total;

    FILE *file;

    while (1) {
        printf("\n Personal Expense Logger \n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            int i;
            case 1:
                if (count < 10) {
                    printf("\nEnter expense category: ");
                    scanf(" %[^\n]", expenses[count].category);

                    printf("Enter amount: ");
                    scanf("%f", &expenses[count].amount);

                    count++;

                    printf("Expense added successfully!\n");
                }
                else {
                    printf("Expense limit reached! Cannot add more records.\n");
                }
                break;


            case 2:
                if (count == 0) {
                    printf("\nNo expenses recorded.\n");
                }
                else {
                    total = 0;

                    printf("\n Expense List \n");
                    printf("%-20s %-10s\n", "Category", "Amount");
                    printf("\n");

                    for ( i = 0; i < count; i++) {
                        printf("%-20s %.2f\n",
                               expenses[i].category,
                               expenses[i].amount);

                        total += expenses[i].amount;
                    }

                    printf("\n");
                    printf("Running Total: %.2f\n", total);
                }
                break;


            case 3:
                file = fopen("expenses.txt", "w");

                if (file == NULL) {
                    printf("Error opening file!\n");
                    return 1;
                }

                for (i = 0; i < count; i++) {
                    fprintf(file, "%s,%.2f\n",
                            expenses[i].category,
                            expenses[i].amount);
                }

                fclose(file);

                printf("Expenses saved successfully to expenses.txt\n");
                printf("Exiting program...\n");

                return 0;


            default:
                printf("Invalid choice! Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}

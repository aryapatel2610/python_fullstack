#include <stdio.h>
#include<conio.h>

int main() {
    float percentage;

    
    printf("Enter the student's percentage: ");
    scanf("%f", &percentage);


    if (percentage < 0 || percentage > 100) {
        printf("Error: Invalid percentage! Please enter a value between 0 and 100.\n");
        return 1; 
    }

    
    if (percentage >= 90) {
        printf("Grade: A\n");
        printf("Excellent! Keep up the outstanding work.\n");
    }
    else if (percentage >= 75) {
        printf("Grade: B\n");
        printf("Good work! Keep pushing.\n");
    }
    else if (percentage >= 60) {
        printf("Grade: C\n");
        printf("Nice effort! Keep improving.\n");
    }
    else if (percentage >= 45) {
        printf("Grade: D\n");
        printf("You passed. Stay focused and work harder.\n");
    }
    else {
        printf("Grade: F\n");
        printf("Don't give up. Learn from your mistakes and try again.\n");
    }

    return 0;
}

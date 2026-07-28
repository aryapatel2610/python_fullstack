#include <stdio.h>
#include <conio.h>

int main()
{
    float amount, rate, time, interest;

    printf("Enter  Amount: ");
    scanf("%f", &amount);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time : ");
    scanf("%f", &time);

    interest = (amount * rate * time) / 100;

    printf(" Interest = %.2f\n", interest);

    return 0;
}

#include <stdio.h>
#include <conio.h>

int main()
{
    float n1, n2, n3, n4, n5, average;

    printf("Enter first number: ");
    scanf("%f", &n1);

    printf("Enter second number: ");
    scanf("%f", &n2);

    printf("Enter third number: ");
    scanf("%f", &n3);

    printf("Enter fourth number: ");
    scanf("%f", &n4);

    printf("Enter fifth number: ");
    scanf("%f", &n5);

    average = (n1 + n2 + n3 + n4 + n5) / 5;

    printf("Average = %.2f\n", average);

    return 0;
}

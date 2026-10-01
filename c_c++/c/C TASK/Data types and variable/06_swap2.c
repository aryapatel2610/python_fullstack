#include <stdio.h>
#include <conio.h>

int main()
{
    int n1, n2;

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    printf(" swapping to number:\n");
    printf("First number = %d\n", n1);
    printf("Second number = %d\n", n2);

    return 0;
}

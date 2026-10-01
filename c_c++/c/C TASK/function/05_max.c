#include <stdio.h>
#include <conio.h>

void max( int a,int b)
{
    if (a > b)
        printf("Maximum number = %d\n", a);
    else
        printf("Maximum number = %d\n", b);
}

int main()
{
    int n1, n2;

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    max(n1, n2);

    return 0;
}

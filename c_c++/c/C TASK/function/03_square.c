#include <stdio.h>
#include <conio.h>

int l;


void square()
{
    printf("Square = %d\n", l * l);
}

int main()
{
    printf("Enter a number: ");
    scanf("%d", &l);

    square();

    return 0;
}

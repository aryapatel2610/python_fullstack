#include <stdio.h>
#include <conio.h>

int main()
{
    int l, b, area;

    printf("Enter the length: ");
    scanf("%d", &l);

    printf("Enter the width: ");
    scanf("%d", &b);

    area = l * b;

    printf("Area of Rectangle = %d\n", area);

    return 0;
}

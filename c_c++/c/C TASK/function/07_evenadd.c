#include <stdio.h>
#include <conio.h>

void value()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

int main()
{
    value();

    return 0;
}

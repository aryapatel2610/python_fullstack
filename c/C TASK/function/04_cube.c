#include <stdio.h>
#include <conio.h>

int l;


void cube()
{
    printf("cube = %d\n", l * l * l );
}

int main()
{
    printf("Enter a number: ");
    scanf("%d", &l);

    cube();

    return 0;
}

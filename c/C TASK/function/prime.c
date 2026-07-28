#include <stdio.h>

int isPrime(int n)
{
    int i, prime=0;

    for (i=1; i<=n;i++)
    {
        if (n%i==0)
            prime++;
    }

    if (prime==2)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime Number", num);
    else
        printf("%d is Not a Prime Number", num);

    return 0;
}

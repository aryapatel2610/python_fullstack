#include <stdio.h>
#include<conio.h>
int main() {
    int i,j,prime;

    printf("Prime numbers  1 to 100 are:\n");

    for (i=2; i<=100;i++) {
    	prime =1;
       

        for (j=2; j<=i/2;j++) {
            if (i%j==0) {
                prime=0;
                break;
            }
        }

        if (prime==1) {
            printf("%d ", i);
        }
    }

    return 0;
}


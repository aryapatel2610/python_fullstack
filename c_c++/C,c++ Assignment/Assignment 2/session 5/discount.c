#include <stdio.h>

int main()
{
    float amount,finalamount;

    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    if (amount>2000)
    {finalamount = amount -(amount * 20 / 100);
            printf(" 20 perstange discount applied. \n");
     }
        else if (amount > 1000)
        {
            finalamount = amount -(amount * 10 / 100);
            printf("10 persantage discount applied.\n");
        }
    
    else
    {
        
        printf("No discount applied.\n",finalamount);
    }

    

    return 0;
}

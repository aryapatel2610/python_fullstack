#include <stdio.h>

int main()
{
    int dailySteps[7],i;

    dailySteps[0] = 5000;  
    dailySteps[1] = 6500;  
    dailySteps[2] = 7000;  
    dailySteps[3] = 4500;  
    dailySteps[4] = 8000; 
    dailySteps[5] = 9000;  
    dailySteps[6] = 7500;  

  
    for(i=0;i<=6;i++)
    {
        printf("Day %d steps: %d\n", i + 1, dailySteps[i]);
    }

    return 0;
}

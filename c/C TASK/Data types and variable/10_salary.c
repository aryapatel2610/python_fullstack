#include <stdio.h>
#include <conio.h>

int main()
{
    float salary, hra, da, totalSalary;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    printf("Enter DA: ");
    scanf("%f", &da);

    totalSalary = salary + hra + da;

    printf("Total Salary = %.2f\n", totalSalary);

    return 0;
}

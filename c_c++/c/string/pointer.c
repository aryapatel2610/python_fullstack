#include<stdio.h>
#include<conio.h>

int main()
{
	int x = 10;
	int *p = &x; //address of x 
	
	printf("X : %d",x); //value of x 
	printf("\nP : %d",p); //address of x 
	
	printf("\nPointer : %d",*p); //value *p
	
	 printf("\n%zu", sizeof(*p));
	return 0;
}

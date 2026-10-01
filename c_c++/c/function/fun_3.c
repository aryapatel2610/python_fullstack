/*
	3) with parameter and with return 	

*/

#include<stdio.h>
#include<conio.h>

int multi(x,y)
{
	int data;
	data = x * y;
	return data;
}

void main()
{
	printf("sub : %d",multi(30,20));

	getch();
}

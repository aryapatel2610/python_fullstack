#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	
	char name1[20];
	int data;
	
	printf("Enter your Name : ");

	gets(name1);
	
	printf("\nName : %s",name1);
	
	data = strlen(name1);
	printf("\nString length : %d",data);
	
	strlwr(name1);
	printf("\nString : %s",name1);
	
	getch();
}

/*
	1) without paramter and no retur	
	int/void func-name(){
		
	}
	func-name()
*/

#include<stdio.h>
#include<conio.h>

void demo(){
	int i;
	for(i=1;i<=20;i++){
		printf("*");
	}
}


void main()
{
	demo();	
		printf("\n");
	
	demo();

	
	getch();
}

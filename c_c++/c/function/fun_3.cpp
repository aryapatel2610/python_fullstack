/*
	2) with parameter and with return 	
	int/void func-name(){
		
	}
	func-name()
*/

#include<stdio.h>
#include<conio.h>

int data(x,y){
	int data;
	data = x - y;
	return data;
}

void main()
{
	printf("sub : %d",data(30,20));
	printf("\nSub1 : %d",data(40,20));
	getch();
}

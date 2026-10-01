/*

	Exit control : codition exit control loop

	do{
		..code ;
		inc.dec
	}while();

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	
	int i = 1; //itercount 
 
 	do{
 		printf("i : %d\n",i);
 		i++;
	 }while(i<=10);
	
	getch();
}

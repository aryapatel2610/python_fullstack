#include<stdio.h>
#include<conio.h>

int main()
{
	  int age,mark;
	  printf("Enter a age");
	  scanf("%d",&age);
	  
	   printf("Enter a mark");
	  scanf("%d",&mark);
	  
	  if(age>18){
	  	printf( "you are eligable for licence.");
	  	
	  	if(mark>15){
	  		printf ("\n you are pass");
		  }
	  }
	
	 return 0;
}

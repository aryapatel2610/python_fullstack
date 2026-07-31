#include<stdio.h>
#include<conio.h>

int main()
{
	  int age;
	  
	  printf("enter your age: ");
	  scanf("%d",&age);
	  
	  if(age>=18){
	  	
	  	printf("eliegable for driving licences \n");
	  }
	  	else if (age>=22){
			  
			  printf("eliegable for credit card \n");
		}
		else if (age>=25){
		
	  			printf("eliegable for car rental \n");
	  		}
	  
	  else
	  {
	  	printf("invlaid value");
	   } 
	
	return 0;
}


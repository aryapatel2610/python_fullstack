#include<stdio.h>
#include<conio.h>

int main(){
	
	int meal;
	
	printf("1. breakfast: \n");
	printf("2. lunch: \n");
	printf("3. dinner: \n");
	printf("4. snackes: \n");
	printf("Enter a choice");
	scanf("%d",&meal);
	
	switch(meal){
		case 1:
			printf("suggestion dish :poha");
			break;
		case 2:
			printf("suggestion dish :punjabi");
			break;
		case 3:
			printf("suggestion dish :khichadi");
			break;
		case 4:
			printf("suggestion dish :tea");
			break;
			
			default:
			printf("try some fruits"); 
						
			
	}
	
	
}

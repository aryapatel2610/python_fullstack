#include<stdio.h>
#include<conio.h>

    float javascript(float price,float quantity){
    	
    	return  price * quantity;
    	
	}



int main(){
	
	   float price,totalbill,quantity;

	   
	   printf("enter a total price:  ");
	   scanf("%f",&price);
	   printf("enter a total quantity:  ");
	   scanf("%f",&quantity);
	   
	   totalbill = javascript(price,quantity);
	   printf("total bill amount : %.2f",totalbill);
	   
	   	
	   	
	   
	
	return 0;
}

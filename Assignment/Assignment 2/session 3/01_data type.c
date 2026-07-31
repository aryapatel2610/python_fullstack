/* 1.
Declare variables for a Flipkart product: productName (as a string), price (float), and rating (double). Assign sample values and print each variable with its data type.
*/

#include<stdio.h>
#include<conio.h>

int main (){
	
	    char productname[] = "wireless mouse";
	     float price = 899.99;
	     double rating = 4.5;
	     
	     printf("product name : %s\n",productname);
	     printf("product price : %.2f\n",price);
	     printf("product rating : %.2f\n",rating);
	
	return 0;
}

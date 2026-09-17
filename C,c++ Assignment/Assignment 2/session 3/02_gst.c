/* zomato order*/

#include<stdio.h>
#include<conio.h>

int main(){
	
	const float gstrate = 18.00;
	float baseprice = 400.00;
	float gstamount, finalprice;
	
	gstamount = (baseprice * gstrate)/100;
	finalprice = baseprice + gstamount;
	
	printf("base price: %.2f\n",baseprice);
	printf("final price with gst: %.2f\n",finalprice);
	
	
	 return 0;
}

#include<stdio.h>
#include<conio.h>

int main(){
	
	float price,product_1 = 6000,product_2 = 7000;
	int total, discount,final_price;
	int member ;
	
	printf("you are a member(y=1 or n=0):");
	scanf("%d",&member);
	
	total = product_1 + product_2;
//	printf("total: %d",total);
	
	if(total >= 1000){
		if(member == 1){
			discount = ((total * 5)/100);
			final_price= total - discount;
			
			
			printf("total :%d",final_price);
		}
		else{
			printf("Total:%d",total);
		}
	}
	else{
		printf("%d",product_1,product_2);
	}
	
	
	return 0;
}

#include<stdio.h>
#include<conio.h>

int main(){
	
	   int i,n1;
	   printf("enter a value: ");
	   scanf("%d",&n1);
	   
	    for(i=1;i<=10;i++){
	   		printf("%d * %d = %d\n",n1,i,n1 * i);
	   	}
	   
	return 0;
}

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i;
	
	for(i=0;i<5;i++){
		printf("Enter your Elemenet : ");
		scanf("%d",&a[i]);
	}
	

	printf("\nRevser array\n");
	
	for(i=4;i>=0;i--){
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	getch();
}

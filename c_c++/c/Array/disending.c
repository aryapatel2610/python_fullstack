#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j;
	int temp;
	
	for(i=0;i<5;i++){
		printf("Enter your Element : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\n---Ascdeing order ---\n");
	
	for(i=0;i<5;i++){
		printf("a[%d] : %d\n",i,a[i]);
	}
	
	
	getch();
}

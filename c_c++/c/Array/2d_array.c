#include<stdio.h>
#include<conio.h>

void main()
{
	
	int a[2][2],b[2][2],sub[2][2];
	int i,j;
	
	 for(i=0;i<2;i++){
	 	
	 	for(j=0;j<2;j++){
	 		
	 		printf("ZEnter your first element a[%d][%d]: ",i,j);
	 		scanf("%d",&a[i][j]);
	 		
		 }
	 }
	 	printf("\n---first Array---\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("a[%d][%d] : %d\n",i,j,a[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter your element b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
		printf("\n---second Array---\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("b[%d][%d] : %d\n",i,j,b[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("\n---Sub of Array---\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("sub[%d][%d] : %d\n",i,j,sub[i][j]);
		}
	}
	
	getch();
}

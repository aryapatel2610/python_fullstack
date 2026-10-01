#include<stdio.h>
#include<conio.h>

int main()
{
	int r,c,k;
	for(r=1;r<=5;r++){
		for(k=0;k>=r;k++){
			printf(" ");
		}
		for(c=1;c<=r;c++){
			
			for(r=4;r>=1;r--){
				for(k=5;k<=r;k++){
		
						printf(" ");
				}
				for(c=4;c<=r;c--){
					printf("*");
				}
			}
			printf("\n");
		}
			
		
		
	}
	
	
	return 0;
}

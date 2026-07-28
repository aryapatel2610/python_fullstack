#include<stdio.h>

int main(){
	
	int r,c,k;
	
	for(r=5;r>=1;r--){
		for(k= 5;k>=r;k--){
			printf(" ");
		}
		for(c=1;c<=(2 *r-1);c++){
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}

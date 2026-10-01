#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,j,k,n;
	
	printf("Enter a number ");
	scanf("%d",&n);
	
	  for(i=1;i<=n;i++){
	  	
	  	for(k=5;k>=i;k--){
	  		printf(" ");
		  }
		  for(j=1;j<=(2*i-1);j++){
		  	printf("*");
		  }
		  printf("\n");
	  }
	return 0;
}

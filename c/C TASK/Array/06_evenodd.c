#include<stdio.h>
#include<conio.h>

void main()
{
      int a[5],i;
      for(i=0;i<=4;i++){
      	printf("Enter your element : ");
      	scanf("%d",&a[i]);
	  }
	  
	  for(i=0;i<=4;i++){
	  	
	  	if(a[i] %2 == 0){
	  		
	  		printf("value is even : %d \n",a[i]);
		  }
		  else{
		  	printf("value is odd: %d \n",a[i]);
		  }
	  }

     getch();
}

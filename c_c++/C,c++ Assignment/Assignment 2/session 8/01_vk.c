#include<stdio.h>
#include<conio.h>

   void getUserInitials(char name){
     
  	if (name == 1){
  		printf("v.k");
  	}
  	else{
  		printf("invalid");
	  }

  }

int main(){
	printf("1 = Virat Kohli");
	int name;
	 printf("\nenter a name: ");
	 scanf("%d",&name);
	 
	getUserInitials(name);
	return 0;
}

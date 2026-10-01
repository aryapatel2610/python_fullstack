 #include<stdio.h>
 #include<conio.h>
  
  int fact(int n){
  	int i, fact = 1;
  	
  	for(i=1;i<=n;i++){
  		fact=fact*i;
	  }
	  
	  return fact;
  }
 
 
 void  main()
 {
 	int num;
 	printf("Enter your number ");
 	scanf("%d",&num);
 	
 	printf("Num of value : %d",num);
 	printf("\n  factorial of 1 to 5: %d" ,fact(num));
       getch();
 }

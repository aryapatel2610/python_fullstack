 #include<stdio.h>
 #include<conio.h>
 
void  main()
{
	int a[5],i,total=0;
	
	for(i=0;i<5;i++){
		printf("Enter a element: ");
		scanf("%d",&a[i]);
		
	
	}
 	for(i=0;i<5;i++){
 		
 	
 			printf("a[%d] : %d\n",i,a[i]);
 		
	 }
	 for(i=0;i<5;i++){
	 
	 	total = total + a[i];
	 	
	
	 	}
		 printf("%d",total);
	getch ();
}

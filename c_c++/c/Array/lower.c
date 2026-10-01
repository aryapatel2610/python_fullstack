 #include<stdio.h>
 #include<conio.h>
 
void  main()
{
	int a[5],i,min;
	
	for(i=0;i<5;i++){
		printf("Enter a element: ");
		scanf("%d",&a[i]);
		
	
	}
 	for(i=0;i<5;i++){
 		
 	
 			printf("a[%d] : %d\n",i,a[i]);
 		
	 }
	 for(i=0;i<5;i++){
	 
	       if (a[i] < min) {
            min = a[i];
        }
	 		 
	
	 	}
	 	
	printf("%d min value",min);
	getch ();
}

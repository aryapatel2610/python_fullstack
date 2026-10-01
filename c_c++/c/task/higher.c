 #include<stdio.h>
 #include<conio.h>
 
void  main()
{
	int a[5],i,max;
	
	for(i=0;i<5;i++){
		printf("Enter a element: ");
		scanf("%d",&a[i]);
		
	
	}
 	for(i=0;i<5;i++){
 		
 	
 			printf("a[%d] : %d\n",i,a[i]);
 		
	 }
	 for(i=0;i<5;i++){
	 
	       if (a[i] > max) {
            max = a[i];
        }
	 		 
	
	 	}
	 	
	printf("%d maximum value",max);
	getch ();
}

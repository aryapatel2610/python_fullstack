 #include<stdio.h>
 #include<conio.h>
 
 void main(){
 	
 	   int song,guess;
 	   
 	   printf("enter a correct song: ");
 	   scanf("%d",&song);
 	   
 	   printf(" \n guess the song name: \n");
 	   printf("1. ranjha (shershah): \n");
 	   printf("2. preet re (dhadak2): \n");
 	   printf("3. khoobsurat (stree 2): \n");
 	   
 	   do{
 	   	
		   printf("guess the song number: ");
		   scanf("%d",&guess);
		   
		   if(guess != song){
		   	printf("wrong guess,sorry try again!");
		   }
		  
		   
		}
		 while(guess != song);
		   
		   	printf("congratulations, guess song are corrected");
 	
 	       getch();
 }

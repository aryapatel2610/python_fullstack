#include<stdio.h>
#include<conio.h>

int main (){
	
	 int likes, comments, post;
	 
	 printf("like a images: ");
	 scanf("%d",&likes);
	 
	 printf("commnet a images: ");
	 scanf("%d",&comments);
	 
	 printf("post a images: ");
	 scanf("%d",&post);
	 
	 if(likes>1000 || comments>=200 && post>=50){
	 	
	 	printf("post are trending: ");
	 }
	 else
	 {
	 	printf("post are not trending: ");
	 }
	 
	
	return 0;
}

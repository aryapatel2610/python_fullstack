#include<stdio.h>
#include<conio.h>

int main()
{
	 int age;
	 printf("Enter your age");
	 scanf("%d",&age);
	 
	 
	 if(age>0 && age<=12)
	 {
	 	printf("you are a child");
	 }
	 else if(age>=13 && age<=18)
	 {
	       
	       printf("you are a teeneger");
	 }
	 else
	 {
	 	printf("you are old");
	 }
	 
        return 0;
}

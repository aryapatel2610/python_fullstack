#include<stdio.h>
#include<conio.h>

union Student{
	int rollno;
	float marks;
	char name[20];
};

int main(){
	
	union Student s;
	
	printf("enter your rollno : ");
	scanf("%d",&s.rollno);
	printf("Enter your Name : ");
	scanf("%s",&s.name);
	printf("Enter your Marks : ");
	scanf("%f",&s.marks);

	printf("\n----student Data ----");
	printf("\nRollno : %d",s.rollno);
	printf("\nName : %s",s.name);
	printf("\nmarks : %f",s.marks);

	return 0;
}

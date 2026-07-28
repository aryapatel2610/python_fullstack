#include<stdio.h>
#include<conio.h>

struct Student{
	int rollno;
	float marks;
	char name[20];
	struct address {
		char city[10];
	};
};

int main(){
	
	struct Student s;
	
	printf("Enter your rollno : ");
	scanf("%d",&s.rollno);
	printf("Enter your name : ");
	scanf("%s",&s.name);
	printf("Enter your marks : ");
	scanf("%f",&s.marks);
	
	printf("----Student Data ----");
	printf("\nRollno : %d",s.rollno);
	printf("\nName : %s",s.name);
	printf("\nMarks : %.2f",s.marks);
	
	
	return 0;
}

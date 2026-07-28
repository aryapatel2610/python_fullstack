#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	
	char name1[20],name2[20];
	int data,comp;
	
	printf("Enter your String 1 : ");
//	scanf("%s",&name1);
	gets(name1);
	
	printf("String 1 : %s",name1);
	
	data = strlen(name1);
	printf("\nString length : %d",data);
	
	printf("\nEnter your string 2 : ");
	gets(name2);
	
	printf("String 2 : %s",name2);
	
	comp = strcmp(name1,name2);
	
	if(comp == 0){
		printf("\nString matched..");
	}
	else{
		printf("\nString are not Match..");
	}
	
	strcat(name1,name2);
	
	printf("\nName Concet String : %s",name1);
	
	getch();
}

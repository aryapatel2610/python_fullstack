#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *file = fopen("demo.txt","a");
	
//	file null 
	
	if(file == NULL){
		printf("Error Opeing file\n");
		return 1;
	}
	
	fputs("\nhello this append data ",file);	

	fclose(file);
	
	printf("File data successfully printed..");
	
	return 0;
}

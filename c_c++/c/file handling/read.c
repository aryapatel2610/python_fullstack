#include<stdio.h>
#include<conio.h>

int main()
{
	char str[100];
	FILE *file = fopen("test.txt","r");
	
	
	if(file == NULL){
		printf("Error Opeing file\n");
		return 1;
	}
	
	fgets(str,100,file);
	
	printf("String read : %s",str);

	fclose(file);
	
//	printf("File data successfully printed..");
	
	return 0;
}

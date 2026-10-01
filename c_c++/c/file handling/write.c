#include<stdio.h>
#include<conio.h>

int main()
{
	FILE*file = fopen("write.txt","w");
	
	if (file == NULL)
	{
		printf("error openig file\n");
		return 1;
		
	}
	fprintf(file,"Arya patel");
	fclose(file);
	
	printf("file data sucessfully printfed...");
	
	return 0;
}

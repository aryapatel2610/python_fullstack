#include<stdio.h>
#include<conio.h>

int main(){
	
	int row,col,i,j,highestscore,cricketscore[][2] = {
		{215,100},
		{210, 199},
        {145, 160},
        {190, 190}
	};
	
	row =4;
	 col= 2;
	 for (i=0;i<row;i++)
	 {
	 	 highestscore = cricketscore[i][0];
	 	 
	 	   for (j=1;j<col;j++){
	 	   	if(cricketscore[i][j]>highestscore)
	 	   	{
	 	   		highestscore = cricketscore[i][j];
				}
			}
			printf(" highestscore is : %d\n", highestscore);
	 }
	return 0;
}

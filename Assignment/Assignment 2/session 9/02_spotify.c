#include<stdio.h>
#include<conio.h>

int main(){
	
	int i, playlist[3][5] = {
		{1,2,3,4,5},{5,4,3,2,1},{2,4,3,1,5}
	};
	printf("rating of second array: \n");
	
	for(i=0;i<5;i++) {
	   printf("day %d: %d\n",i+1,playlist[1][i]);
	}
	return 0;
}

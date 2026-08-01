#include<stdio.h>
#include<conio.h>

 float calculateAverage(int order[],int size){
 	int sum =0,i;
 	
 	for(i=0;i<size;i++){
 		
 		sum = sum + order[i];
	 }
	 return (float)sum/size;
 }

int main(){
	
	int dailyorders[7]= {100,200,300,400,500,600,700};
	
	float average;
	
	average = calculateAverage(dailyorders,7);
	 printf("Average weekly Zomato spend = %.2f", average);
	return 0;
}

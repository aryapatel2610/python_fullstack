#include<stdio.h>
#include<conio.h>

int main()
{
	 int maths,guj,eng,total,per;
	   printf("Enter a subjcet maths");
	   scanf("%d",&maths);
	   printf("Enter a subjcet guj");
	   scanf("%d",&guj);
	   printf("Enter a subjcet eng");
	   scanf("%d",&eng);
	   
	   if(maths>100 || guj>100 || eng>100 || maths<0 || guj<0 || eng<0)
	   {
	   	printf("invalid marks");
	   }
	   else if(maths<33 || guj<33 || eng<33)
	   {
	   	printf("faild");
	   }
	   else {
	   	
	   	 total = maths+guj+eng;
	   	 per = total/3;
	   	 
	   	 printf("%d total\n",total);
	   	 printf("%d per\n",per);
	   }
	   if(per>=85)
	   {
	   	printf("grade A");
	   }
	   else if(per>=70)
	   {
	   	printf("grade B");
	   }
	   else if(per>=50)
	   {
	   	printf("grade C");
	   }
	   else
	   {
	   	printf("fail");
	   }
	   
	
	return 0;
	
}

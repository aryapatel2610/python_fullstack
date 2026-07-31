#include<stdio.h>
#include<conio.h>

    int eligibleforoffer(int age, float totalordervalue)
    {
    	if(age>=18 && totalordervalue>500){
    		
    		return 1;
		}
		else{
			return 0;
		}
	}

	int main()
	{
		int age ;
		float totalordervalue;
		   printf("user enter the age: ",age);
		   scanf("%d",&age);
		   
		    printf("totalorder value: ",totalordervalue);
		   scanf("%f",&totalordervalue);
		   
		   
		if(eligibleforoffer(age,totalordervalue))
		{
			printf("user is eligible for offer");
		}
		else{
			printf("user are not eligible for offer");
		}
		return 0;
	}


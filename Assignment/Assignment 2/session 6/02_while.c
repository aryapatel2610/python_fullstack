#include<stdio.h>
#include<conio.h>


int main()

{
	int team[10] = {1,2,3};
	int  count = 3,choice, newteam,i;
	
	while(1){
		printf("\n ipl team menu \n");
		printf("1. ipl team name \n");
		printf("2. add new team \n");
		printf("3. exit \n");
    	scanf("%d",&choice);
		
		switch (choice){
			
			case 1:
				printf("fov ipl team name \n");
				for(i=0; i<count;i++){
					
					if(team[i]==1)
					printf(" chennai super kings \n");
					else if(team[i]==2)
					printf(" mumbai indians \n");
					else if(team[i]==3)
					printf(" royal chalngeers bangluru \n");
				    else if(team[i]==4)
				    printf(" \gujrat titans \n");
				      else if(team[i]==5)
				    printf(" \nkkr\n");
				}
				break;
				
				case 2:
				
				printf("add new team name \n");
				printf(" chennai super kings \n");
				printf(" mumbai indians \n");
			    printf(" royal chalngeers bangluru \n");	
			    printf(" gujrat titans \n");
			    printf(" kkr \n");
			    scanf("%d",&newteam);
			    
			    team[count] = newteam;
			    count++;
			    printf("added team succesfully \n");
			    break;
			    
			    
			    case 3:
			    	printf("exting... \n");
			    	return 0;
			    	
			    	default :
			    		printf("invalid choice \n");
		}
		
	}
	
	return 0;
}

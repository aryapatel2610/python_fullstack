#include <stdio.h>
#include<conio.h>

void formatFollowersCount(int count) {

 
    if (count >= 1000 && count < 1000000) {

      
        printf("%.1fK\n", count / 1000.0);

    }
   
    else if (count >= 1000000) {

        
        printf("%.1fM\n", count / 1000000.0);

    }
    
    else {

        printf("%d\n", count);

    }
}

int main() {

    int followers1 = 1500;
    int followers2 = 1200000;
    int followers3 = 850;

    
    printf("Followers: ");
    formatFollowersCount(followers1);

    printf("Followers: ");
    formatFollowersCount(followers2);

    printf("Followers: ");
    formatFollowersCount(followers3);

    return 0;
}

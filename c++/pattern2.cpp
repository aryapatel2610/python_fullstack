#include<iostream>
using namespace std;

int main(){
	
	   int i,j,k;
//	   char ch = 'A';
//	   
//	   for(i=1;i<=4;i++){
//	   	for(j=1;j<=i;j++){
//	   		
//	   		cout<<ch;
//	   		ch++;
//		   }
//		   cout<<endl;
//	   }

//          for(i=5;i>=1;i--){
//          	for(j=1;j<=i;j++)
//          	{
//          		cout<<"*";
//			  }
//			  cout<<endl;
//		  }
//	

//for(i=5;i>=1;i--){
//	for(k=5;k>=i;k--)
//	{
//		cout<<" ";
//	}
//	for(j=1;j<=i;j++){
//		
//		cout<<"*";
//	}
//	cout<<endl;
//}

 for(i=1;i<=5;i++)
 {
 	for(k=5;k>=i;k--){
 		
 		cout<<" ";
	 }
	 for(j=1;j<=i;j++){
	 	
	 	cout<<"*";
	 }
	 cout<<endl;
 }

	return 0;
}

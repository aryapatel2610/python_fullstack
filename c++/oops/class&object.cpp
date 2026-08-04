#include<iostream>
using namespace std;

     class Sbi
     { 
        private :
        	float balance;
        	 string name;
        	 
        	 public:
        	 	
        	 	void enrty(){
        	 		
        	 		cout<<" Enter your name : " ;
        	 		getline(cin,name);
        	 		
        	 		cout<<"\n enter a bank balance: ";
        	 		cin>>balance;
        	 		
        	    }
				void showdeatils()
        	    
        	    {
        	    	cout<<" \n name is : "<<name;
        	    	cout<<" \n show a balance : "<<balance;
        	    	
				} 
				void credit()
				{
					float amount,updatedbalance1;
					
					
					
					cout<<"\n credit a amount:";
					cin>>amount;
					updatedbalance1 = amount + balance ;
					cout<<"\n updated balance : "<<updatedbalance1;
				}
				
				void debit()
				{  	float debitamount,updatedbalance2;
				     cout<<"\n debit a amount:";
					cin>>debitamount; 
					updatedbalance2 = balance - debitamount ;
					cout<<"\n updated balance : "<<updatedbalance2;	
					
					
				}
    
	 };


int main(){
	
	Sbi ved;
	ved.enrty();
	ved.showdeatils();
	ved.credit();
	ved.debit();
	return 0;
	
}

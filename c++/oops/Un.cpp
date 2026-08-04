#include<iostream>
using namespace std;

     class Sbi
     { 
        private :
        	float balance,updatedbalance,amount, debitamount,updatedbalance2;
        	 string name;
        	 
        	 public:
        	 	
        	 	void entry(){
        	 		
        	 		cout<<" Enter your name : ";
        	 		getline(cin,name);
        	 		
        	 		cout<<" enter a bank balance: ";
        	 		cin>>balance;
        	 		
        	    }
				void showdeatils()
        	    
        	    {
        	    	cout<<" \n name is : "<<name;
        	    	cout<<"\n  show a balance : "<<balance;
        	    	
				} 
				void credit()
				{

					
					
					
					cout<<"\n\n credit a amount:";
					cin>>amount;
					updatedbalance = amount + balance ;
					cout<<" updated balance : "<<updatedbalance;
				}
				
				void debit()
				{ 

				     cout<<"\n\n debit a amount: ";
					cin>>debitamount; 
					updatedbalance2 =updatedbalance - debitamount;
					 if(updatedbalance2 <= 500){
					 	cout<<"low a balance amount not debited \n";
					 }
					 else{
					 
					cout<<" updated balance : "<<updatedbalance2;	
				}
					
					cout<<" \n\n  current balance :"<<updatedbalance2;
				}
    
	 };


int main(){
	
	Sbi ved;
	ved.entry();
	ved.showdeatils();
	ved.credit();
	ved.debit();
	return 0;
	
}

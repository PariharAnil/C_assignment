#include<iostream>
using namespace std;
class Bank
{
	string name;
	int accountno;
	string type;
	int balance;
	  public:
	  	  void opeingblc()
	  	  {    
	  	   cout<<"Enter the bank detalis:"<<endl;
	  	    cout<<"Name="<<endl;
	  	    cin>>name;
	  	    cout<< "Account number="<<endl;
	  	  	cin>>accountno;
	  	  	cout<<"Account type="<<endl;
	  	  	cin>>type;
	  	  	cout<<"Opeing Balance="<<endl;
	  	  	cin>>balance;
	  	  	cout<<"name="<<name<<endl;
			cout<<"Account number="<<accountno<<endl;
			cout<<"Account type="<<type<<endl;
	  	  	cout<<"Balance="<<balance<<endl;
		  }
	  	  void deposite()
	  	  {  
	  	      cout<<"\nEnter the deposite amount="<<endl;
	  	  	int deposite;
	  	  	cin>>deposite;
	  	  	balance=deposite+balance;
	  	  	cout<<"The deposite balance="<<balance<<endl<<endl;
			}
	  	  void withdraw()
	  	  {  
	  	     cout<<"Enter the withdraw account=";
	  	     int withdraw;
	  	  	cin>>withdraw;
	  	  	 if(balance>withdraw)
	  	  	 {   
	  	  	    balance=balance-withdraw;
	  	  	 	cout<<"Withdraw after balance="<<balance<<endl<<endl;
				 }
	  	  	else
	  	  	{
	  	  		cout<<"Not a access limit"<<endl<<endl;
			}
	  	  	
		}
	  	  void display()
			{
				cout<<"name="<<name<<endl;
				cout<<"Total Balance="<<balance<<endl;
					
				}
};
int main()
{   
        
		Bank ob;
		ob.opeingblc();
		ob.deposite();
		ob.withdraw();
		ob.display();
 
	return 0;
}

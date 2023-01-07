/*Define a class named ‘Bank Account’ to represent following members: 
Data members:- 
 - Account Number 
 - Name of Depositor 
 – Account Type 
 – Balance Amount 
Member functions: 
 - Initialize members 
 - Deposit Amount 
 - Withdraw Amount 
 - Display Balance 
Write a C++ program to test the Bank Account class for 10 customers.*/ 
#include<iostream>
using namespace std;
class Bank
{
	private:
		int account_no;
		char name_of_depositor[10];
		char account_type[10];
		float balance_amount;
	public:
		void initialize()
		{
			cout<<"\n Enter Account number:";
			cin>>account_no;
			cout<<"\n Enter Name of depositor:";
			cin>>name_of_depositor;
			cout<<"\n Enter Acount type:";
			cin>>account_type;
			cout<<"\n Enter account balance:";
			cin>>balance_amount;	
		}
		void deposite()
		{
			int amount;
			cout<<"\n Enter The Amount to deposite:";
			cin>>amount;
			balance_amount=balance_amount+amount;
			cout<<"\n Amount Deposited sucessfully"<<endl;
		}
		void withdraw()
		{
			int amount;
			cout<<"\n Enter Amount to Withdraw:";
			cin>>amount;
			if(amount<balance_amount)
			{
				balance_amount=balance_amount+amount;
				cout<<" Amount withdraw sucessfully"<<endl;	
			}
			else
			{
				cout<<" Withdraw amount is greater than balance\n Amount cannot be withdrawn!!!"<<endl;
				if(amount>balance_amount)
				{
					withdraw();
				}
			}
		}
		void display()
		{
			cout<<"\n \t"<<account_no<<"\t"<<name_of_depositor<<"\t"<<account_type<<"\t"<<balance_amount;
		}
};
int main()
{
	Bank b[3];
	int i;
	for(i=0;i<3;i++)
	{
		b[i].initialize();
		b[i].deposite();
		b[i].withdraw();
	}
	cout<<"\n ********************** Bank Management System ***********************";
	cout<<"\n *********************************************************************";
	cout<<"\n\t Acc No\tName\tAcc type  Balance";
	for(i=0;i<3;i++)
	{
		b[i].display();
	}
	return 0;
}
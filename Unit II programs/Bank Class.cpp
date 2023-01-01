//Write a program to declare class Bank
#include<iostream>
using namespace std;
class Bank
{
	private:
		char bank_name[10];
		int id;
		char address[15];
	public:
		void get_bank_info();
		void display_bank_info();
};
void Bank :: get_bank_info()
{
	cout<<"\n Enter Bank Name : ";
	cin>>bank_name;
	cout<<"\n Enter Bank Id : ";
	cin>>id;
	cout<<"\n Enter Bank Address : ";
	cin>>address;
}
void Bank :: display_bank_info()
{
	cout<<"\n Bank Name : "<<bank_name;
	cout<<"\n Bank ID : "<<id;
	cout<<"\n Bank Address : "<<address;
}
int main()
{
	Bank b;
	b.get_bank_info();
	cout<<"\n *************** Bank Management System ***************";
	b.display_bank_info();
	return 0;
}

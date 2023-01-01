//Write a program to declare class employee
#include<iostream>
using namespace std;
class employee
{
	private:
		int id;
		char name[10];
		long int salary;
		char address[20];
	public:
		void get_data()
		{
			cout<<"\n Enter Employee Id:";
			cin>>id;
			cout<<"\n Enter Employee Name:";
			cin>>name;
			cout<<"\n Enter Employee Salary:";
			cin>>salary;
			cout<<"\n Enter Employee Address:";
			cin>>address;
		}
		void display_data()
		{
			if(salary>25000)
			{
				cout<<"\n Employee Id:"<<id;
				cout<<"\n Employee Name:"<<name;
				cout<<"\n Employee Salary:"<<salary;
				cout<<"\n Employee Address:"<<address;
			}
		}
};
int main()
{
	employee e[3];
	int i;
	for(i=0;i<3;i++)
	{
		e[i].get_data();
	}	
	for(i=0;i<3;i++)
	{
		e[i].display_data();
	}
	return 0;
}

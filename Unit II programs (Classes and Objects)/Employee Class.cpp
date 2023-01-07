//Write a program to declare class employee
#include<iostream>
using namespace std;
class employee
{
	private:
		int emp_id;
		char emp_name[20];
		int salary;
		char address[20];
	public:
		void get_data()
		{
			cout<<"\n Enter Employee Id : ";
			cin>>emp_id;
			cout<<"\n Enter Employee Name : ";
			cin>>emp_name;
			cout<<"\n Enter Employee Salary : ";
			cin>>salary;
			cout<<"\n Enter Employee Address : ";
			cin>>address;
		}
		void display_data()
		{
			cout<<"\n "<<emp_id<<"\t"<<emp_name<<"\t"<<salary<<"\t"<<address;
		}
};
int main()
{
	employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
		e[i].get_data();
	}
	cout<<"\n **********************************************";
	cout<<"\n ***********Employee Management System ********";
	cout<<"\n **********************************************";
	cout<<"\n\n Emp Id\tEmp Name\t\tSalary\tAddress";
	for(i=0;i<5;i++)
	{
		e[i].display_data();
	}
	return 0;
}

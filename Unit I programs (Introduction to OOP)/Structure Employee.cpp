//Write a program to declare structure employee
#include<iostream>
using namespace std;
int main()
{
	struct employee
	{
		int emp_id;
		char emp_name[10];
		int salary;
	};
	struct employee e[3];
	int i;
	for(i=1;i<=3;i++)
	{
		cout<<"\n Enter Employee Id : ";
		cin>>e[i].emp_id;
		cout<<"\n Enter employee Name : ";
		cin>>e[i].emp_name;
		cout<<"\n Enter employee Salary : ";
		cin>>e[i].salary;
    }
    for(i=1;i<=3;i++)
    {
		cout<<"\n Employee Id : "<<e[i].emp_id;
		cout<<"\n Employee name : "<<e[i].emp_name;
		cout<<"\n Employee Salary : "<<e[i].salary;
	}
	return 0;	
}

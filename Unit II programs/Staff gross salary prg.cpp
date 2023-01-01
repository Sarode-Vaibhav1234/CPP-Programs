//Write a program to declare a class staff having data member id,name,basic salary,DA,HRA and calculate gross 
//salary. Accept and display this data for 3 staff where Da=74.5%,HRA=30%.
#include<iostream>
using namespace std;
class staff
{
	private:
		int id;
		char name[10];
		float basic_salary,DA,HRA,gross;
	public:
		void get_data()
		{
			cout<<"\n Enter Staff Id:";
			cin>>id;
			cout<<"\n Enter Staff Name:";
			cin>>name;
			cout<<"\n Enter Staff Basic Salary:";
			cin>>basic_salary;
		}
		void put_data()
		{
			DA=(74.5*basic_salary)/100;
			HRA=(30*basic_salary)/100;
			gross=basic_salary+DA+HRA;
			cout<<"\n Staff Id:"<<id;
			cout<<"\n Staff Name:"<<name;
			cout<<"\n Staff Gross Salary:"<<gross<<endl;
		}
};
int main()
{
	staff s[3];
	int i;
	for(i=0;i<3;i++)
	{
		s[i].get_data();
	}
	for(i=0;i<3;i++)
	{
		s[i].put_data();
	}
	return 0;
}

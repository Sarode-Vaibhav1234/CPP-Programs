//Write a program to declare class ‘staff’ having data members as name and post. Accept this data 
//for 5 staffs and display name of staff who are HOD. 
#include<iostream>
#include<string.h>
using namespace std;
class staff
{
	public:
		char name[20],post[20];
	public:
		staff()
		{
			cout<<"\n Enter Staff Name:";
			cin>>name;
			cout<<"\n Enter Staff Post:";
			cin>>post;
		}
		void display()
		{
			cout<<"\n ******************Staff Information********************";
			cout<<"\n Staff Name:"<<name;
			cout<<"\n Staff Post:"<<post;
		}
};
int main()
{
	staff s[5];
	int i;
	for(i=0;i<5;i++)
	{
		if(strcmp(s[i].post,"HOD")==0)
			s[i].display();
	}
	return 0;
}

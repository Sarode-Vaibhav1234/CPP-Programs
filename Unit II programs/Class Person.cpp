//Write a program to declare class person
#include<iostream>
using namespace std;
class person
{
	private :
		char name[20];
		int age;
		char Gender[6];
	public:
		void get_data()
		{
			cout<<"\n Enter Person Name : ";
			cin>>name;
			cout<<"\n Enter Persons Age : ";
			cin>>age;
			cout<<"\n Enter Persons Gender : ";
			cin>>Gender;
		}
		void display_data()
		{
			cout<<"\n Persons Name : "<<name;
			cout<<"\n Presons Age : "<<age;
			cout<<"\n Persons Gender : "<<Gender;
		}
};
int main()
{
	person p;
	p.get_data();
	p.display_data();
	return 0;	
}

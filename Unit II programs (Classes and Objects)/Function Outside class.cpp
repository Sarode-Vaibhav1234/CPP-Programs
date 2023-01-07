//Write a program to define a function outside a class 
#include<iostream>
#include<string.h>
using namespace std;
class college
{
	private:
		int coll_id;
		char coll_name[20];
		int no_of_staff;
		int no_of_stud;
	public:
		int get_data(int id,int staff,int stud);
		void display_data();
};
int college :: get_data(int id, int staff, int stud)
{
	coll_id=id;
	cout<<"\n Enter College Name : ";
	cin>>coll_name;
	no_of_staff=staff;
	no_of_stud=stud;
}
void college :: display_data()
{
	cout<<"\n College Id 	: "<<coll_id;
	cout<<"\n College Name	: "<<coll_name;
	cout<<"\n No of Staff in College 	: "<<no_of_staff;
	cout<<"\n No of Students in College : "<<no_of_stud;
}	
int main()
{
	int x,z,s;
	cout<<"\n Enter College Id : ";
	cin>>x;
	cout<<"\n Enter No of Students in College : ";
	cin>>z;
	cout<<"\n Enter College Staff : ";
	cin>>s;
	college c1;
	c1.get_data(x,z,s);
	c1.display_data();
	return 0;
}

 

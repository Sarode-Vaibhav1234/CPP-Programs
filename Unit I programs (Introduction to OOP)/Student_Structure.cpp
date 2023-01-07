//Structure Student
#include<iostream>
using namespace std;
struct student
{
	int roll_no;
	char name[10];
	float marks;	
};
int main()
{
	struct student s1;
	cout<<"\n Enter Student Roll No : ";
	cin>>s1.roll_no;
	cout<<"\n Enter Student Name : ";
	cin>>s1.name;
	cout<<"\n Enter Subject Marks : ";
	cin>>s1.marks;
	cout<<"\n *********** Student Manegement System ************";
	cout<<"\n Roll No : "<<s1.roll_no;
	cout<<"\n Name    : "<<s1.name;
	cout<<"\n Marks   : "<<s1.marks;
	return 0;
}

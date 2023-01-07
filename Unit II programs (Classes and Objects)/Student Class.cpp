//Write a program to declare student class
#include<iostream>
using namespace std;
class student
{
	private:
		int roll_no;
		char name[10];
		int percentage;
	public:
		void get_data()
		{
			cout<<"\n Enter student Roll No : ";
			cin>>roll_no;
			cout<<"\n Enter student Name : ";
			cin>>name;
			cout<<"\n Enter Student percentage : ";
			cin>>percentage;
		}
		void display_data()
		{
			cout<<"\n Student Roll No 	 : "<<roll_no;
			cout<<"\n Student Name 	  	 : "<<name;
			cout<<"\n Student Percentage : "<<percentage;
		}
};
int main()
{
	student s;
	s.get_data();
	s.display_data();
	return 0;
}

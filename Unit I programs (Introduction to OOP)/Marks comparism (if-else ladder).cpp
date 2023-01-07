//Write a program to catogorise the marks
#include<iostream>
using namespace std;
int main()
{
	float marks;
	cout<<"\n Enter your marks : ";
	cin>>marks;
	if(marks>=75)
		cout<<"\n You Got Distinction!!!";
	else if(marks>=60)
		cout<<"\n You got First Class!!!";
	else if(marks>=50)
		cout<<"\n You got Second Class!!!";
	else if(marks>=40)
		cout<<"\n You are Pass Only!!!";
	else
		cout<<"\n You are Fail!!!";
	return 0;
}

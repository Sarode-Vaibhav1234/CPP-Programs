//Write a program to find a year is leap or not
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter any year : ";
	cin>>year;
	if((year%4==0)&&(year%100!=0)||(year%400==0))
	{
		cout<<"The year is leap year";
	}
	else
	{
		cout<<"The year is not leap";
	}
	return 0;
}

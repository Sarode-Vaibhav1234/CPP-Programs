//Write a program to find the smaller number among two numbers using  operator
#include<iostream>
using namespace std;
int main()
{
	int no1,no2,small;
	cout<<"\n Enter the two numbers =";
	cin>>no1>>no2;
	no1<no2?cout<<"\n The smallest no is ="<<no1:cout<<"\n The smallest no is ="<<no2;
	return 0;
}

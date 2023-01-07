//Write a program to find the smaller number among two numbers using conditional operator
#include<iostream>
using namespace std;
int main()
{
	int no1,no2,small;
	cout<<"\n Enter the two numbers =";
	cin>>no1>>no2;
	small=no1<no2?no1:no2;
	cout<<"\n The Smallest number is ="<<small;
	return 0;
}

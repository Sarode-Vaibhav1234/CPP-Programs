//Write a program to find the greatest number using conditional operator
#include<iostream>
using namespace std;
int main()
{
	int no1,no2,great;
	cout<<"\n Enter the numbers = ";
	cin>>no1>>no2;
	great=no1>no2?no1:no2;
	cout<<"\n Greatest number = "<<great;
	return 0;
}

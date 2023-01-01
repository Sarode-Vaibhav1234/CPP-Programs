//Write a program to find the number is positive or negative
#include<iostream>
using namespace std;
int main()
{
	int no;
	cout<<"\n Enter the number = ";
	cin>>no;
	if(no!=0)
	{
		if(no>0)
		{
			cout<<"\n The number is Positive";
		}
		else
		{
			cout<<"\n The number is Negative";
		}
	}
	else
	{
		cout<<"\n The number is neither positive nor negative";
	}
	return 0;
}

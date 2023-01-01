//Write a program to find out smallest number among 3 numbers using nested if-else
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n Enter any three integer number : ";
	cin>>a>>b>>c;
	if(a<b)
	{
		if(a<c)
		{
			cout<<a<<" is the smallest number";
		}
		else
		{
			cout<<c<<" is the smallest number";
		}
	}
	else
	{
		if(b<c)
		{
			cout<<b<<" is the smallest number";
		}
		else
		{
			cout<<c<<" is the smallest number";
		}
	}
	return 0;
}

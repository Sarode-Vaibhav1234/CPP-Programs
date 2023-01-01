//Write a program to find out greater number among 3 numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n Enter any three integer number : ";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<< a<<" is the greatest number";
		}
		else
		{
			cout<< c<<" is the greatest number";
		}
	}
	else
	{
		if(b>c)
		{
			cout<< b<<" is the greatest number";
		}
		else
		{
			cout<< c<<" is the greatest number";
		}
	}
	return 0;
}

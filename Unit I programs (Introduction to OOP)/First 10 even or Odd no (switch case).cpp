//Write a C++ program to display first 10 odd or even numbers using switch case

#include<iostream>
using namespace std;
int main()
{
	int i,ch;
	cout<<"\n 1. Find First 10 Even numbers";
	cout<<"\n 2. Find First 10 Odd numbers";
	cout<<"\n Enter Your Choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"\n First 10 Even numbers : ";
			for(i=1;i<=20;i++)
			{
				if(i%2==0)
				{
					cout<<i<<"\t";
				}
			}
			break;
		case 2:
			cout<<"\n First 10 Odd numbers : ";
			for(i=1;i<=20;i++)
			{
				if(i%2==1)
				{
					cout<<i<<"\t";
				}
			}
			break;
		default :
			cout<<"\n You have entered Wrong choice !!!";
	}
	return 0;
}

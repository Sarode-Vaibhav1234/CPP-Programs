//Write a program to find the smallest no among given array numbers
#include<iostream>
using namespace std;
int main()
{
	int i,temp=0,a[5];
	cout<<"\n Enter 5 Array elements : ";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	temp=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<temp)
		{
			temp=a[i];
		}
	}
	cout<<"\n Smallest no among given numbers : "<<temp;
	return 0;
}

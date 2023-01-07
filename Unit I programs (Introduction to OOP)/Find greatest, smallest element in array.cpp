//Write a C++ program to find greatest or smallest element in array using switch case
#include<iostream>
using namespace std;
int main()
{
	int a[5],i,ch,no;
	cout<<"\n Enter 5 Array elements : ";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\n 1. Find Greatest number";
	cout<<"\n 2. Find Smallest number";
	cout<<"\n\n Enter Your Choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			no=a[0]; 
			for(i=0;i<5;i++)
			{
				if(a[i]>no)
				{
					no=a[i];
				}
			}
			cout<<"\n Greatest number : "<<no;
			break;
		case 2:
			no=a[0];
			for(i=0;i<5;i++)
			{
				if(a[i]<no)
				{
					no=a[i];
				}
			}
			cout<<"\n Smallest number : "<<no;
			break;
		default:
			cout<<"\n You Have Entered Wrong Choice!!!";
	}
	return 0;
}

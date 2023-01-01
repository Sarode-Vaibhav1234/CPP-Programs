//Write a program to find sum of a single digit;
#include<iostream>
using namespace std;
int main()
{
	int no,sum=0,rem;
	cout<<"\n Enter the number : ";
	cin>>no;
	while(no!=0)
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	cout<<"\n Sum of Digit : "<<sum;
	return 0;
}

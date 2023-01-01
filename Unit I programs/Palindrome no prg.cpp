//Write a program to find reverse no of a given number
#include<iostream>
using namespace std;
int main()
{
	int rev=0,no,rem,temp;
	cout<<"\n Enter the number : ";
	cin>>no;
	temp=no;
	while(no!=0)
	{
		rem=no%10;
		rev=(rev*10)+rem;
		no=no/10;
	}
	cout<<"\n Reverse number : "<<rev;
	if(temp==rev)
	{
		cout<<"\n The no is Palindrome";
	}
	else
	{
		cout<<"\n\n The no is not Palindrome";
	}
	return 0;
}

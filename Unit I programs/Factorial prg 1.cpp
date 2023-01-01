//Write a program to find a factorial of number
#include<iostream>
using namespace std;
int main()
{
	int i,no,fact=1;
	cout<<"\n Enter the number to find Factorial : ";
	cin>>no;
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	cout<<"\n Factorial of a number : "<<fact;
	return 0;
}

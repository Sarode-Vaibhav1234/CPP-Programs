//Write a program to print even numbers between 1 to 20 using for loop
#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
			cout<<i<<"\t";
	}
	return 0;
}

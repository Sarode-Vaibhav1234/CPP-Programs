//Write a C++ language program to implement a program using continue statement
#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==4)
		{
			continue;
		}
		cout<<i<<"\t";
	}
	return 0;
}

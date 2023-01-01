//Write a program to implement break statement
#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==4)
		{
			break;
		}
		cout<<i<<"\t";
	}	
	return 0;
}

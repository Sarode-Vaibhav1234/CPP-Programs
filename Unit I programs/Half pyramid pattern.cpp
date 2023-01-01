#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int no,i,j;
	cout<<"\n Half pyramid Pattern to display 1 to 10 numbers : ";
	no=1;
	for(i=1;i<=4;i++)
	{
		cout<<"\n";
		for(j=1;j<=i;j++)
		{
			cout<<setw(3)<<no;
			no++;
		}
	
	}
	return 0;
}

#include<iostream>
using namespace std;
int a=15;
int main()
{
	int a=25;
	cout<<"\n Value of Local variable : "<<a;
	cout<<"\n Value of Global variable : "<<::a;
	::a=50;
	cout<<"\n Value of Local variable : "<<a;
	cout<<"\n Value of Global variable : "<<::a;
	return 0;
}

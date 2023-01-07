#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"\n Enter the value of a and b =";
	cin>>a>>b;
	cout<<"\n Before Swapping";
	cout<<"\n Value of a = "<<a<<"\t Value of b = "<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\n After Swapping";
	cout<<"\n Value of a = "<<a<<"\t Value of b = "<<b;
	return 0;
}

//Write a program to swap three numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,temp;
	cout<<"\n Enter three numbers : ";
	cin>>a>>b>>c;
	cout<<"\n Before Swapping";
	cout<<"\n a = "<<a<<"\tb = "<<b<<"\tc = "<<c<<endl;
	temp=a;
	a=c;
	c=b;
	b=temp;
	cout<<"\n After Swapping";
	cout<<"\n a = "<<a<<"\tb = "<<b<<"\tc = "<<c;
	return 0;
}

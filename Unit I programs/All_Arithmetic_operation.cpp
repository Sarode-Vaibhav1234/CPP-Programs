#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	float q;
	cout<<"Enter the two integer number= ";
	cin>>a>>b;
	c=a+b;
	cout<<"\nAddition is    = "<<c;
	c=a-b;
	cout<<"\nSubtraction    = "<<c;
	c=a*b;
	cout<<"\nMultiplication = "<<c;
	q=(float)a/b;
	cout<<"\nDivision is    = "<<q;
	c=a%b;
	cout<<"\nRemainder      = "<<c;
	return 0;
	
}

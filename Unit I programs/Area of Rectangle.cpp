//Write a program to find area of rectangle
#include<iostream>
using namespace std;
int m=100;
int main(int m)
{
	int length,breadth,area;
	cout<<"\n Enter the Length of Rectangle : ";
	cin>>length;
	cout<<"\n Enter the Breadth of Rectangle : ";
	cin>>breadth;
	area=length*breadth;
	cout<<"\n Area of Rectangle : "<<area;
	return 0;
}

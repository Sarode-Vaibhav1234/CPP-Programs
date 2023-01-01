//Write a program to calculate diameter, circumference, area of circle take radius as input
#include<iostream>
using namespace std;
int main()
{
	float radius,diameter,circumference,area,PI=3.14;
	cout<<"Enter the radius of circle = ";
	cin>>radius;
	diameter=2*radius;
	circumference=2*PI*radius;
	area=PI*radius*radius;
	cout<<"\n Diameter of circle= "<<diameter;
	cout<<"\n Circumference of circle = "<<circumference;
	cout<<"\n Area of circle = "<<area;
	return 0;
}

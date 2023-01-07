#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3,s4, total;
	float average;
	cout<<"Enter the C++ Marks            =";
	cin>>s1;
	cout<<"Enter the Data Structure Marks =";
	cin>>s2;
	cout<<"Enter the Data Communi.. Marks =";
	cin>>s3;
	cout<<"Enter the Microprocessor Marks =";
	cin>>s4;
	total=s1+s2+s3+s4;
	average=(float)total/4;
	cout<<"\n Marks Obtained in Subjects";
	cout<<"\nStudent Name         : Shushil Kumar Pant";
	cout<<"\nC++ Marks            = "<<s1;
	cout<<"\nData Structure Marks = "<<s2;
	cout<<"\nData Communi.. Marks = "<<s3;
	cout<<"\nMicroprocessor Marks = "<<s4;
	cout<<"\nTotal Marks          = "<<total;
	cout<<"\nPercentage 		  = "<<average;
	return 0;
}

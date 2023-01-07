#include<iostream>
using namespace std;
int main()
{
	float basic,HRA,DA,TA,gross;
	cout<<"\n Enter Basic Salary = ";
	cin>>basic;
	HRA=(basic*15)/100;
	DA=(basic*10)/100;
	TA=(basic*5)/100;
	gross=basic+HRA+DA+TA;
	cout<<"\n HRA ="<<HRA;
	cout<<"\n Da ="<<DA;
	cout<<"\n TA ="<<TA;
	cout<<"\n Gross Salary ="<<gross;
	return 0;
}

//Wrie a program to display entered no using switch case
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"\n Enter integer no between 1 to 3 : ";
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<"\n Entered number is ONE";
			break;
		case 2:
			cout<<"\n Entered number is TWO";
			break;
		case 3:
			cout<<"\n Entered number is THREE";
			break;
		default:
			cout<<"\n You have entered Wrong choice";
	}
	return 0;
}

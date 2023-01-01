//Write a program to declare constructor addition
#include<iostream>
using namespace std;
class addition
{
	private:
		int x,y;
	public:
		addition(int c,int d)
		{
			x=c;
			y=d;
			cout<<"\n Addition of no : "<<x+y;
		}
};
int main()
{
	int a,b;
	cout<<"\n Enter First no : ";
	cin>>a;
	cout<<"\n Enter second no : ";
	cin>>b;
	addition a1(a,b);
	return 0;	
}

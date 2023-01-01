//Write a program to find to find addition of two numbers using friend function
#include<iostream>
using namespace std;
class Addition
{
	private:
		int a,b;
	public:
		void get_data(int x,int y)
		{
			a=x;
			b=y;	
		}
		friend void display_data(Addition a2);		
};
void display_data(Addition a2)
{
	int c;
	c=a2.a+a2.b;
	cout<<"\n Addition of two numbers:"<<c;
}
int main()
{
	int x,y;
	cout<<"\n Enter two numbers:";
	cin>>x>>y;
	Addition a1;
	a1.get_data(x,y);
	display_data(a1);
	return 0;
}
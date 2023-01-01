//Constructor with default argument
#include<iostream>
using namespace std;
class addition
{
	private:
		int a,b;
	public:
		addition(int x,int y=0)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"\n Addition of two numbers : "<<(a+b);
		}
};
int main()
{
	int x,y;
	
	cout<<"\n Enter two numbers for addition : ";
	cin>>x>>y;
	addition a1(x,y);
	a1.display();
	return 0;
}

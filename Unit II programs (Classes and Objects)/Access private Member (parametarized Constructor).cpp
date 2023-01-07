//Write a program to access private member function
#include<iostream>
using namespace std;
class addition
{
	private:
		int a,b;
		void get_data(int x,int y)
		{
			a=x;
			b=y;
		}
	public:
		void display_data()
		{
			get_data(100,200);
			int c;
			c=a+b;
			cout<<"\n Addition is : "<<c;
		}
};
int main()
{
	addition a1;
	a1.display_data();
	return 0;
}

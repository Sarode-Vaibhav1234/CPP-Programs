//Write a program to implement copy constructor
#include<iostream>
using namespace std;
class code
{
	private:
		int id;
	public:
		code()
		{
			id=100;
		}
		code(code &m)
		{
			id=m.id;
		}
		void display()
		{
			cout<<"\n Value of Id :"<<id;
		}
};
int main()
{
	code c1;
	code c2(c1);
	c1.display();
	c2.display();
	return 0;
}

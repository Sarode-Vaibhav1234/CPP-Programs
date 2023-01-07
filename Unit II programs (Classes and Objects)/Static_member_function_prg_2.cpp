//Write a program for implemention of static member function
#include<iostream>
using namespace std;
class A
{
	private:
		int no;
		static int count;
	public:
		int getdata(int x);
		static void display();
};
int A::count;
int A::getdata(int x)
{
	no=x;
	count++;
	return 0;
}
void A::display()
{
	cout<<"\n Value of count:"<<count;
}
int main()
{
	A x1,y1,z1;
	x1.getdata(10);
	y1.getdata(20);
	z1.getdata(30);
	A::display();
	return 0;
}
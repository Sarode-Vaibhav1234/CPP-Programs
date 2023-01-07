//Write a program to explicitly call parameterized constructor
#include<iostream>
using namespace std;
class Addition
{
	private:
		int a,b;
	public:
		Addition(int x, int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"\n Addition is : "<<(a+b);
		}
};
int main()
{
	
	Addition a1=Addition(100,200);	//Explicit Constructor Calling
	Addition a2=Addition(10,20);			
	a1.display();
	a2.display();
	return 0;
}

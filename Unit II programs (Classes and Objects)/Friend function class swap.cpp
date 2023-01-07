//Write a program to swap two numbers using 2 friend function
#include<iostream>
using namespace std;
class swapping
{
	private:
		static int a,b,temp;
		friend void display(swapping s);
	public:	
		friend void get_data(swapping s);
};
int swapping :: a;
int swapping :: b;
int swapping :: temp;
void get_data(swapping s)
	{
		cout<<"\n Enter Two numbers for swapping : ";
		cin>>s.a>>s.b;
		cout<<"\n ************** Before Swapping ***************";
		cout<<"\n a="<<s.a<<"\tb="<<s.b;	
	}

void display(swapping s)
{
	s.temp=s.a;
	s.a=s.b;
	s.b=s.temp;
	cout<<"\n ************** After Swapping ****************";
	cout<<"\n a="<<s.a<<"\tb="<<s.b;
}
int main()
{
	swapping n;
	get_data(n);
	display(n);
	return 0;
}
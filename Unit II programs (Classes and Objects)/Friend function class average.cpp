//Write a programto find average of number
#include<iostream>
using namespace std;
class average
{
	private:
		int a,b;
	public:
		void get_data()
		{
			cout<<"\n Enter two numbers to find average : ";
			cin>>a>>b;
		}
		friend void display(average a1);
};
void display(average a1)
{
	int avg;
	avg=(a1.a+a1.b)/2;
	cout<<"\n Average : "<<avg;	
}
int main()
{
	average k1;
	k1.get_data();
	display(k1);
	return 0;
}

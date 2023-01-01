//Write a program to implement constructor concept
#include<iostream>
using namespace std;
class time
{
	private:
		int hour,minutes,seconds;
	public:
		time();
		void display()
		{
			cout<<"\nTIME="<<hour<<":"<<minutes<<":"<<seconds;
		}
};
time::time()
{
	cout<<"\n Enter Hour:";
	cin>>hour;
	cout<<"\n Enter Minutes:";
	cin>>minutes;
	cout<<"\n Enter Seconds:";
	cin>>seconds;
}
int main()
{
	time t1;
	t1.display();
	return 0;
}
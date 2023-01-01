//Write a C++ program to calculate sum of distance and display the results using friend function. 
#include<iostream>
using namespace std;
class Distance
{
	public:
		int dis,result;
		void get_data()
		{
			cout<<"\n Enter distance:";
			cin>>dis;
		}
		friend void display_data(Distance d1,Distance d2)
		{
			int result;
			result=d1.dis+d2.dis;
			cout<<"\n Sum of Distance:"<<result;
		}
};
int main()
{
	Distance d1,d2;
	d1.get_data();
	d2.get_data();
	display_data(d1,d2);
	return 0;
}
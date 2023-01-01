
#include<iostream>
using namespace std;
class time1
{
	private:
		static int h;
		static int m;
	public:
		void set_time()
		{
			cout<<"\n Enter the Time in hours and minutes: ";
			cin>>h>>m;
		}
		void put_time()
		{
			cout<<h<<":"<<m;
		}
};
int time1 :: h;
int time1 :: m;
int main()
{
	time1 t1;
	cout<<"\n Initial time = ";
	t1.put_time();
	t1.set_time();
	cout<<"\n Updated Time = ";
	t1.put_time();
	return 0;
	
}
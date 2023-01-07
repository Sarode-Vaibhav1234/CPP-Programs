//Write a program to implement static member
#include<iostream>
using namespace std;
class Item
{
	private:
		int no;
	 	static int count;
	public:
		int get_data()
		{
			cout<<"\n Enter the value of variable:";
			cin>>no;
			count++;
			return 0;
		}
		int put_data()
		{
			cout<<"\n Value of Variable:"<<no;
			cout<<"\n Value of Count:"<<count;
			return 0;
		}
};
int Item::count;
int main()
{
	Item x1,y1,z1;
	x1.get_data();
	y1.get_data();
	z1.get_data();
	cout<<"\n Object x1:";
	x1.put_data();
	cout<<"\n Object y1:";
	y1.put_data();
	cout<<"\n Object z1:";
	z1.put_data();
	return 0;
}
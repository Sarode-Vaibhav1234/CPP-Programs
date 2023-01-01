//Write a program to display no of objects created using static member function
#include<iostream>
using namespace std;
class Object
{
	private:
		static int count;
	public:
		void get_data()
		{
			count++;
		}
		static void display_data()
		{
			cout<<"\n Objects created in program="<<count;
		}
};
int Object::count;
int main()
{
	Object o1,o2,o3,o4,o5;
	o1.get_data();
	o2.get_data();
	o3.get_data();
	o4.get_data();
	o5.get_data();
	Object::display_data();
	return 0;
}
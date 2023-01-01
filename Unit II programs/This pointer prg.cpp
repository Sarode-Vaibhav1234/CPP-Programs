//this keyword
#include<iostream>
using namespace std;
class Addition
{
	private:
		int a,b;
	public:
		void get_data()
		{
			this->a=100;
			this->b=200;
		}
		void put_data()
		{
			cout<<"\nAddition of numbers:"<<a+b;
		}
};
int main()
{
	Addition a1;
	a1.get_data();
	a1.put_data();
	return 0;
}
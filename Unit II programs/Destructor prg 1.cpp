//Write a progam to implement distructor
#include<iostream>
using namespace std;
class alpha
{
	public:
		alpha()
		{
			cout<<"\n Constructor created sucessfully";
		}
		~alpha()
		{
			cout<<"\n Constuctor destroyed sucessfully";
		}
};
int main()
{
	alpha a1;
	return 0;
}

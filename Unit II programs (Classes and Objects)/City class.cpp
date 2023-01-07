//Write a program to declare a class city
#include<iostream>
using namespace std;
class city
{
	private:
		char name[20];
		long int population;
	public:
		void getdata();
		void putdata();
};
void city :: getdata()
{
	cout<<"\n Enter City Name : ";
	cin>>name;
	cout<<"\n Enter City Population : ";
	cin>>population;
}
void city :: putdata()
{
	cout<<"\n City Name:"<<name;
	cout<<"\n City Population:"<<population;
}
int main()
{
	city c[10];
	int i;
	for(i=0;i<10;i++)
	{
		c[i].getdata();
	}
	for(i=0;i<10;i++)
	{
		c[i].putdata();
	}
	return 0;
}

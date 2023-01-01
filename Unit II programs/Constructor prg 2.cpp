//Write a program to declare class Fruit
#include<iostream>
using namespace std;
class fruit
{
	private:
		char fruit_name[10];
		char fruit_colour[10];
		int fruit_price;
	public:
		fruit()
		{
			cout<<"\n Enter Fruit Name : ";
			cin>>fruit_name;
			cout<<"\n Enter Fruit Colour : ";
			cin>>fruit_colour;
			cout<<"\n Enter Fruit Price : ";
			cin>>fruit_price;
		}
		void display_data()
		{
			cout<<"\n"<<fruit_name<<"\t"<<fruit_colour<<"\t"<<fruit_price;
		}
};
int main()
{
	fruit f[3];
	int i;
	cout<<"\n *************************************************";
	cout<<"\n *****************Fruit Store ********************";
	cout<<"\n *************************************************";
	cout<<"\nName \t Colour\t Price";
	for(i=0;i<3;i++)
	{
		f[i].display_data();
	}
}

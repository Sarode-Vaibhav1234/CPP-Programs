//Write a program to accept a number and display its square using friend Funcion
#include<iostream>
using namespace std;
class square
{
	private:
		int no;
		friend int put_data(square m);
	public:
		void get_data()
		{
			cout<<"\n Enter Any Number:";
			cin>>no;
		}
};
int put_data(square m)
{
	return(m.no*m.no);
}
int main()
{
	square s,m;
	int p;
	s.get_data();
	p=put_data(s);
	cout<<"\n Square of number:"<<p;
	return 0;
}

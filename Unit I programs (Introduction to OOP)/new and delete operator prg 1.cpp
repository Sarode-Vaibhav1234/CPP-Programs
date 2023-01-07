//Write a program to allocate memory and deallocate it dynamically
#include<iostream>
using namespace std;
int main()
{
	int *p=new int;
	*p=200;
	cout<<"Value of p = "<<*p<<endl;
	delete p;
	//cout<<"Value of p = "<<*p;
	return 0;  
}

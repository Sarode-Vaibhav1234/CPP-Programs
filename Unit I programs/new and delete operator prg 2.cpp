#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char *p=new char[10];
	strcpy(p,"Computer");
	cout<<"Value of p = "<<p;
	delete []p;
	return 0;
}

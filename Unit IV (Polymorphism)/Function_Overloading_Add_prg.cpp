#include<iostream>
using namespace std;
void add();
void add(int x);
void add(float x,float y);
int main()
{
    add();
    add(100);
    add(20.9,30.1);
    return 0;
}
void add()
{
    int a=100,b=100;
    cout<<"\n Addition of two numbers="<<a+b;
}
void add(int x)
{
    int a=10;
    cout<<"\n Addition of two numbers:"<<x+a;
}
void add(float x=0,float y=0)
{
    cout<<"\n Addition of two floating point numbers:"<<x+y;
}
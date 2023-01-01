#include<iostream>
using namespace std;
int main()
{
    int a,b,c,*p1,*p2;
    p1=&a;
    p2=&b;
    cout<<"\n Enter any two numbers:";
    cin>>*p1>>*p2;
    c=*p1+*p2;
    cout<<"\n Addition of two numbers = "<<c;
}
#include<iostream>
using namespace std;
int main()
{
    float a,b,*p1,*p2;
    p1=&a;
    p2=&b;
    cout<<"\n Enter any two float  numbers:";
    cin>>*p1>>*p2;
    cout<<"\n First No:"<<*p1;
    cout<<"\n Second No:"<<*p2;
    return 0;
}
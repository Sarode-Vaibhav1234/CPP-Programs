#include<iostream>
using namespace std;
int main()
{
    int a,*p;
    p=&a;
    cout<<"\n Enter the value of a=";
    cin>>a;
    cout<<"\n Value of a="<<a;
    cout<<"\n Value of *p="<<*p;
    cout<<"\n Address of a="<<&a;
    cout<<"\n Value of p="<<p;
    cout<<"\n Address of p="<<&p;
    return 0;
}
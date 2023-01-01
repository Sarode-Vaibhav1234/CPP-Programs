#include<iostream>
using namespace std;
int main()
{
    int a=100,*p1,**p2;
    p1=&a;
    p2=&p1;
    cout<<"\n Value of a="<<a;          //Value of a
    cout<<"\n Value of *p1="<<*p1;      //Value of a
    cout<<"\n Address of p1="<<&p1;     //Address of pointer p1
    cout<<"\n Value of p2="<<p2;        //Address of pointer p1       
    cout<<"\n Value of p1="<<p1;        //Address of a
    cout<<"\n Value of *p2="<<*p2;      //Address of a 
    cout<<"\n Value of **p2="<<**p2;    //Value of a
    return 0;
}
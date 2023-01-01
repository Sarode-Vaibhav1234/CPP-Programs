#include<iostream>
using namespace std;
int main()
{
    string *p=new string;
    cout<<"\n Enter your name:";
    cin>>*p;
    cout<<"\n Your Name is:"<<*p;
    return 0;
}
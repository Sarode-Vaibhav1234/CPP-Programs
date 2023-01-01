#include <iostream>
using namespace std;
int main()
{
    int a,b,*p1,*p2,temp;
    cout<<"\n Enter two numbers:";
    cin>>a>>b;
    p1=&a;
    p2=&b;
    cout<<"\n *** Before Swapping ***";
    cout<<"\n a="<<a<<"\tb="<<b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"\n *** After Swapping ***";
    cout<<"\n a="<<*p1<<"\tb="<<*p2;
    return 0;
}
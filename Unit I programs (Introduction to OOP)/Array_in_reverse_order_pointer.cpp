#include<iostream>
using namespace std;
int main()
{
    int a[5],i,*p;
    cout<<"\n Enter 5 array elements:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    p=&a[4];
    cout<<"\n Array elements in reverse order:";
    for(i=0;i<5;i++)
    {
        cout<<*p<<"  ";
        p--;
    }
    return 0;
}
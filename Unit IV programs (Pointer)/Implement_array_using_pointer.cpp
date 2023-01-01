#include<iostream>
using namespace std;
int main()
{
    int a[5],*ptr;
    ptr=&a[0];
    cout<<"\n Enter array elements:";
    for(int i=0;i<=4;i++)
    {
        cin>>*ptr;
        ptr++;
    }
    ptr=&a[0];
    cout<<"\n Array elements:";
    for(int i=0;i<5;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    cout<<"\n Enter Array elements:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Your array elments:";
    for(i=0;i<5;i++)
    {
        cout<<"\t"<<a[i];
    }
    return 0;
}
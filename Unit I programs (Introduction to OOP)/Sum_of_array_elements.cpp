#include<iostream>
using namespace std;
int main()
{
    int a[5],i,sum=0;
    cout<<"\n Enter array elements:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"\n Sum of array elements:"<<sum;
    return 0;
}
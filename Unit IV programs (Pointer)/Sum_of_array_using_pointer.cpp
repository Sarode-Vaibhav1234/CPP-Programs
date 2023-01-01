#include<iostream>
using namespace std;
int main()
{   
    int i,a[5],*p,sum=0;
    cout<<"\n Enter 5 array elements:";
    for(i=0;i<5;i++)
    {
        cin>>a[i];  
    }
    p=&a[0];
    for(i=0;i<5;i++)
    {
        sum=sum+ *p;
        p++;
    }
    cout<<"\n Sum of array elements:"<<sum;
    return 0;
}
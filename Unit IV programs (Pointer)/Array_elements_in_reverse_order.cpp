#include<iostream>
using namespace std;
int main()
{
    char a[10];
    cout<<"\n Enter array elements:";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Array elements in reverse order:";
    for(int i=9;i>=0;i--)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}
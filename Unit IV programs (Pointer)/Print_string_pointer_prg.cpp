#include<iostream>
using namespace std;
int main()
{
    char a[10],*ptr;
    int i;
    cout<<"\n Enter any string:";
    cin>>a;
    ptr=&a[0];
    cout<<"\n Your string is:";
    while(*ptr!='\0')
    {
        cout<<*ptr;
        ptr++;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    char str[20],*ptr;
    int len=0;
    cout<<"\n Enter any String:";
    cin>>str;
    ptr=&str[0];
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    cout<<"\n Length of Sring:"<<len;
    return 0;
}
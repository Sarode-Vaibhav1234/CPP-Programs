#include<iostream>
using namespace std;
int main()
{
    char str1[15],str2[15],*ptr1,*ptr2;
    int len=0;
    cout<<"\n Enter your string:";
    cin>>str1;
    ptr1=&str1[0];
    while(*ptr1!='\0')
    {
        len++;
        ptr1++;
    }
    ptr1--;
    ptr2=&str2[0];
    while(len>0)
    {
        *ptr2=*ptr1;
        ptr1--;
        ptr2++;
        len--;
    }
    *ptr2='\0';
    ptr2=&str2[0];
    cout<<"\n Reverse String:";
    while(*ptr2!='\0')
    {
        cout<<*ptr2;
        ptr2++;
    }
    return 0;
}
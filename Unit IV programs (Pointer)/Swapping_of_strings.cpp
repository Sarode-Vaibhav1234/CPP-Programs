#include<iostream>
using namespace std;
int main()
{
    char str1[20],str2[20],str3[20],*p1,*p2,*p3;
    cout<<"\n Enter First String:";
    cin>>str1;
    cout<<"\n Enter Second String:";
    cin>>str2;
    cout<<"\n\n *** Before exchanging contents of one string into another string *** "<<endl;
    cout<<"\n First String:"<<str1;
    cout<<"\n Second String:"<<str2;
    cout<<"\n\n *** After exchanging contents of one string into another string *** "<<endl;
    p1=&str1[0];
    p2=&str2[0];
    p3=&str3[0];
    while(*p1!='\0')
    {
        *p3=*p1;
        p1++;
        p3++;
    }
    *p3='\0';
    p1=&str1[0];
    while(*p2!='\0')
    {
        *p1=*p2;
        p2++;
        p1++;
    }
    *p1='\0';
    p2=&str2[0];
    p3=&str3[0];
    while(*p3!='\0')
    {
        *p2=*p3;
        p3++;
        p2++;
    }
    *p2='\0';
    cout<<"\n First String:"<<str1;
    cout<<"\n Second String:"<<str2;
    return 0;
}
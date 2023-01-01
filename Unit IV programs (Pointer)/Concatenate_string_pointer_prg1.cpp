#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[30],str2[20],*p1,*p2;
    cout<<"\n Enter first string : ";
    cin>>str1;                                  //input first string
    cout<<"\n Enter second string : ";
    cin>>str2;                                  //input second string
    p1=&str1[0];
    p2=&str2[0];
    while(*p1!='\0')
    {
        p1++;
    }
    while(*p2!='\0')
    {
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1='\0';
    cout<<"\n Concatenated String:"<<str1;
    return 0;
}
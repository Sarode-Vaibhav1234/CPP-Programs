#include<iostream>
using namespace std;
int main()
{
    char str1[20],str2[20],*p1,*p2;
    int len1,len2,flag=0;
    cout<<"\n Enter first string:";
    cin>>str1;
    cout<<"\n Enter second string:";
    cin>>str2;
    p1=&str1[0];
    p2=&str2[0];
    while(*p1!='\0')
    {
        p1++;
        len1++;
    }
    while(*p2!='\0')
    {
        p2++;
        len2++;
    }
    if(len1==len2)
    {
        p1=&str1[0];
        p2=&str2[0];
        while(*p1!='\0')
        {
            if(*p1!=*p2)
            {
                flag=1;
                break;
            }
            p1++;    
            p2++;
        }
        if(flag==1)
        {
            cout<<"\n Both strings are not equal";
        }
        else
        {
            cout<<"\n Both strings are Equal";
        }
    }
    else
    {
        cout<<"\n Both strings are Equal";
    }
    return 0;
}
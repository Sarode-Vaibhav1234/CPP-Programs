#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int size,i,flag=0;
    cout<<"\n Enter the size of string:";
    cin>>size;
    char str[size];
    char str2[size];
    cout<<"\n Enter your String:";
    cin>>str;
    strcpy(str2,str);
    if(strcmp(str,str2)==0)
    {
        cout<<"\n Given String is a palindrome String";
    }
    else
        cout<<"\n Given String is not a palindrome String";
    return 0;
}
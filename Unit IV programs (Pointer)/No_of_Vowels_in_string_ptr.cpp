//Write a program to accept a sting from user and count no of vowels in string using pointer
//Programmer:Sarode Vaibhav
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[20],*p;
    int count=0;
    p=&str[0];
    cout<<"\n Enter the String:";
    cin>>str;
    while(*p!='\0')
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
        {
            count++;
        }
        p++;
    }
    cout<<"\n Vowels Present in String:"<<count;
    return 0;
}
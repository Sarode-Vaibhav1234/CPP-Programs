#include<iostream>
using namespace std;
int main()
{
    int size,i;
    char *ptr;
    cout<<"\n Enter the size of character:";
    cin>>size;
    ptr=new char[size];
    cout<<"\n Enter your character:";
    for(i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    cout<<"\n Your character is:";
    for(i=0;i<size;i++)
    {
        cout<<" "<<ptr[i];
    }
    delete []ptr;
    return 0;
}
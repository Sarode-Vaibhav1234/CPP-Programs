#include<iostream>
using namespace std;
void swap(int *n,int *m);
int main()
{
    int a,b;
    cout<<"\n Enter any two numbers:";
    cin>>a>>b;
    cout<<"\n *** Before Swapping ***";
    cout<<"\n a="<<a<<"\tb="<<b;
    swap(&a,&b);
    cout<<"\n\n *** After Swapping ***";
    cout<<"\n a="<<a<<"\tb="<<b;
    return 0;
}
void swap(int *n,int *m)
{
    int temp;
    temp=*n;
    *n=*m;
    *m=temp;
}

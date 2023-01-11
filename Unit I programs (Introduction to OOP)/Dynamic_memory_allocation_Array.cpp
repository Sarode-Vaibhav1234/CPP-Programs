#include<iostream>
using namespace std;
int main()
{
    int size;
    int *p= NULL;
    cout<<"\n Enter how many elements you want in array:";
    cin>>size;
    p=new int[size];
    cout<<"\n Enter "<<size<<" array elements:";
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }
    cout<<"\n Values stored in array=";
    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<"\t";
    }
    delete [] p;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,*p;
    p=&a;
    cout<<"\n Address stored in p="<<p;
    p=p+2;
    cout<<"\n Address stored in p after p+2 ="<<p;
    p=p-1;
    cout<<"\n Address stored at p after p-1 ="<<p;
    p++;
    cout<<"\n Address stored at p after p++ ="<<p;
    p--;
    cout<<"\n Address stored at p after p-- ="<<p; 
    return 0;   
}
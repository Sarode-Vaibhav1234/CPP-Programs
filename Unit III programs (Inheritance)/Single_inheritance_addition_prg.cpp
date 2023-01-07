#include<iostream>
using namespace std;
class A
{
    protected:
        int a,b;
    public:
        void getdata()
        {
            cout<<"\n Enter two numbers:";
            cin>>a>>b;
        }
};
class B:public A
{
    public:
       void putdata()
       {
            int c;
            c=a+b;
            cout<<"\n Addition of two numbers="<<c;
       }
        
       
};
int main()
{
    B b1;
    b1.getdata();
    b1.putdata();
    return 0;
}
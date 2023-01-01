#include<iostream>
using namespace std;
class A
{
    private:
        int a;
    public:
        void get_A()
        {
            cout<<"\n Enter the value of a=";
            cin>>a;
        }
        void disp_A()
        {
            cout<<"\n Value of a="<<a;
        }
};
class B:public A
{
    private:
        int b;
    public:
        void get_B()
        {
            cout<<"\n Enter the value of b=";
            cin>>b;
        }
        void disp_B()
        {
            cout<<"\n Value of b="<<b;
        }
};
class C:public A
{
    private:
        int c;
    public:
        void get_C()
        {
            cout<<"\n Enter the value of c=";
            cin>>c;
        }
        void disp_C()
        {
            cout<<"\n Value of c="<<c;
        }
};
int main()
{
    B b1;
    C c1;
    b1.get_A();
    b1.get_B();
    c1.get_C();
    b1.disp_A();
    b1.disp_B();
    c1.disp_C();
    return 0;
}
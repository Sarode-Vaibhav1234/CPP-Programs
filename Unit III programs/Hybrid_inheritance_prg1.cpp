#include<iostream>
using namespace std;
class A
{
    private:
        int a;
    public:
        void get_A()
        {
            cout<<"\n Enter The value of a=";
            cin>>a;
        }
        void disp_A()
        {
            cout<<"\n Value of a="<<a;
        }
};
class B: public A
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
class C
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
class D:public B,public C
{
    private:
            int d;
    public:
        void get_D()
        {
            cout<<"\n Enter the value of d=";
            cin>>d;
        }
        void disp_D()
        {
            cout<<"\n Value of d="<<d;
        }
};
int main()
{
    D obj;
    obj.get_A();
    obj.get_B();
    obj.get_C();
    obj.get_D();
    obj.disp_A();
    obj.disp_B();
    obj.disp_C();
    obj.disp_D();
    return 0;
}
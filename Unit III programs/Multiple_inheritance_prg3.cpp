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
class B
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
class C:public A,public B
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
    C obj;
    obj.get_A();
    obj.get_B();
    obj.get_C();
    obj.disp_A();
    obj.disp_B();
    obj.disp_C();
    return 0;
}
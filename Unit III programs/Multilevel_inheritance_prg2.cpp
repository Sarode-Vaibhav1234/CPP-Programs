#include<iostream>
using namespace std;
class A
{
    public:
        void display1()
        {
            cout<<"\nGood";
        }
};
class B:public A
{
    public:
        void display2()
        {
            cout<<" Morning";
        }
};
class C:public B
{
    public:
        void display3()
        {
            cout<<" Friends";
        }
};
int main()
{
    C c1;
    c1.display1();
    c1.display2();
    c1.display3();
    return 0;
}
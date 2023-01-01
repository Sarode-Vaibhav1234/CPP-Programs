#include<iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"\nConstructor of Class A";
        }
};
class B
{
    public:
        B()
        {
            cout<<"\nConstructor of Class B";
        }
};
class C:public A,public B
{
    public:
        C():A(),B()
        {
            cout<<"\nConstructor of Class C";
        }
};
int main()
{
    C c1;
    return 0;
}
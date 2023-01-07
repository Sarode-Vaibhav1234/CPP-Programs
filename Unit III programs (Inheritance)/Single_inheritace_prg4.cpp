#include<iostream>
using namespace std;
class A
{
    public:
        void getdata()
        {
            cout<<"\nGood";
        }
};
class B:public A
{
    public:
        void putdata()
        {
            cout<<" Morning";
        }
};
int main()
{
    B b1;
    b1.getdata();
    b1.putdata();
    return 0;
}
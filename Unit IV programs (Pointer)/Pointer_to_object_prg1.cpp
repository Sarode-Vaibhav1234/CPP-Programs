#include<iostream>
using namespace std;
class Addition
{
    int a,b;
    public:
        Addition(int x,int y)
        {
            a=x;
            b=y;
        }
        void disp_data()
        {
            cout<<"\n Addition of two numbers:"<<a+b;
        }
};
int main()
{
    Addition *a1 = new Addition(100,200);
    a1->disp_data();
    return 0;
}
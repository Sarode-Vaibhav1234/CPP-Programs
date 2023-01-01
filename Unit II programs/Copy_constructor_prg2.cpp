#include<iostream>
using namespace std;
class Addition
{
    private:
        int a,b,c;
    public:
        Addition()
        {
            cout<<"\n Enter any two numbers:";
            cin>>a>>b;
        }
        Addition(Addition &m)
        {
            a=m.a;
            b=m.b;
        }
        void display()
        {
            c=a+b;
            cout<<"\n Addition of two numbers:"<<c;
        }
};
int main()
{
    Addition a1;
    Addition a2(a1);
    a2.display();
    return 0;
}
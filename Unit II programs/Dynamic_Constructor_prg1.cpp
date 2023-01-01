#include<iostream>
using namespace std;
class code
{
    private:
        int id;
    public:
        code()
        {
            id=100;
        }
        code(int m)
        {
            id=m;
        }
        code(code & x)
        {
            id=x.id;
        }
        void display()
        {
            cout<<id;
        }
};
int main()
{
    int m=200;
    code c1;
    code c2(c1);
    code c3(m);
    cout<<"\n Value of ID for A=";
    c1.display();
    cout<<"\n Value of ID for B=";
    c3.display();
    cout<<"\n Value of ID for C=";
    c2.display();
    return 0;
}
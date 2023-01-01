#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        void getdata()
        {
            cout<<"\n Enter the value of a=";
            cin>>this->a;
        }
        void dispdata()
        {
            cout<<"\n Value of a="<<this->a;
            cout<<"\n Address of a="<<this;
        }
};
int main()
{
    A *a1=new(A);
    a1->getdata();
    a1->dispdata();
    return 0;
}
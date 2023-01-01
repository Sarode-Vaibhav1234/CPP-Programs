#include<iostream>
using namespace std;
class Item
{
    public:
        int a,b,c;
        void get_data(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        void operator -()
        {
            a=-a;
            b=-b;
            c=-c;
        }
        void disp_data()
        {
            cout<<"\n Value of Numbers="<<a<<"\t"<<b<<"\t"<<c;
        }
};
int main()
{
    Item i1;
    int x,y,z;
    cout<<"\n Enter any three numbers:";
    cin>>x>>y>>z;
    i1.get_data(x,y,z);
    -i1;
    i1.disp_data();
}
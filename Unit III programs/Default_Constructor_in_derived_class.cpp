#include<iostream>
using namespace std;
class Alpha
{
    private:
        int x;
    public:
        Alpha()
        {
            cout<<"\nEnter the value of x=";
            cin>>x;
        }
        void disp_x()
        {
            cout<<"\nValue of x="<<x;
        }
};
class Beta
{
    private:
        int y;
    public:
        Beta()
        {
            cout<<"\nEnter the value of y=";
            cin>>y;
        }
        void disp_y()
        {
            cout<<"\nValue of y="<<y;
        }
};
class Gama:public Alpha,public Beta
{
    private:
        int z;
    public:
        Gama():Alpha(),Beta()
        {
            cout<<"\nEnter the value of z=";
            cin>>z;
        }
        void disp_z()
        {
            cout<<"\nValue of z="<<z;
        }
};
int main()
{
    Gama g1;
    g1.disp_x();
    g1.disp_y();
    g1.disp_z();
    return 0;
}
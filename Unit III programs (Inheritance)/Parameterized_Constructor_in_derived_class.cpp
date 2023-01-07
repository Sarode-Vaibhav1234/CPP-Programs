#include<iostream>
using namespace std;
class Alpha
{
    private:
        int x;
    public:
        Alpha(int i)
        {
            x=i;
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
        Beta(int j)
        {
            y=j;
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
        Gama(int s, int m, int p):Alpha(s),Beta(m)
        {
            z=p;
        }
        void disp_z()
        {
            cout<<"\nValue of z="<<z;
        }
};
int main()
{
    Gama g1(100,200,300);
    g1.disp_x();
    g1.disp_y();
    g1.disp_z();
    return 0;
}
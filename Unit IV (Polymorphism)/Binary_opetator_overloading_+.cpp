#include<iostream>
using namespace std;
class Space
{
    private:
        int x,y,z;
    public:
        void get_data(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;    
        }
        Space operator +(Space &m)
        {
            Space temp;
            temp.x=x+m.x;
            temp.y=y+m.y;
            temp.z=z+m.z;
            return temp;
        }
        void display()
        {
            cout<<"\n x="<<x<<"\t y="<<y<<"\t z="<<z;
        }
};
int main()
{
    Space s1,s2,s3;
    s1.get_data(100,200,300);
    s2.get_data(10,20,30);
    s3=s1+s2;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
#include<iostream>
using namespace std;
class Item
{
    private:
        int a,b;
    public:
        void get_data(int x,int y)
        {
            a=x;
            b=y;
        }
        void operator ++()
        {
            a=++a;  
            b=++b;    
        }       
        void disp_data()
        {
            cout<<"\n Value of a="<<a;
            cout<<"\n Value of b="<<b;
        }
};
int main()
{
    Item i1;
    int x,y;
    cout<<"\n Enter the value of a=";
    cin>>x;
    cout<<"\n Enter the value of b=";
    cin>>y;
    i1.get_data(x,y);
    ++i1;
    i1.disp_data();
    return 0;
}
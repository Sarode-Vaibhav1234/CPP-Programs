#include<iostream>
using namespace std;
class Item
{
    private:
        int a,b;
    public:
        void get_data()
        {
            cout<<"\n Enter any two numbers:";
            cin>>a>>b;
        }
        friend void operator -(Item &s)
        {
            s.a=-s.a;
            s.b=-s.b;
        }
        void display()
        {
            cout<<"\n a="<<a<<"\t b="<<b<<endl;
        }
};
int main()
{
    Item s1;
    s1.get_data();
    cout<<"\n Before calling operator overloaded function";
    s1.display();
    //-s1;
    operator -(s1);
    cout<<"\n After calling operator overloaded function";
    s1.display();
    return 0;
}
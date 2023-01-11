#include<iostream>
using namespace std;
class Code
{
    private:
        int a,b,c;
    public:
        void get_data()
        {
            cout<<"\n Enter three values:";
            cin>>a>>b>>c;
        }
        void display()
        {
            cout<<"\n a="<<a<<"\t b="<<b<<"\t c="<<c<<endl;
        }
        void operator *(Code &s)
        {
            s.a=a*s.a;
            s.b=b*s.b;
            s.c=c*s.c;
        }
};
int main()
{
    Code s1,s2;
    s1.get_data();
    s2.get_data();
    cout<<"\n Before calling operator overloaded function"<<endl;
    cout<<"\n For Object s1:";
    s1.display();
    cout<<"\n For Object s2:";
    s2.display();
    s1*s2; //s1 is a calling object and s2 is passed as argument
    cout<<"\n After calling operator overloaded function"<<endl;
    cout<<"\n For Object s1:";
    s1.display();
    cout<<"\n For Object s2:";
    s2.display();
}
#include<iostream>
using namespace std;
class Staff
{
    char name[20];
    char post[20];
    public:
        void getdata()
        {
            cout<<"\n Enter Staff name:";
            cin>>name;
            cout<<"\n Enter Staff Post:";
            cin>>post;
        }
        void putdata()
        {
            cout<<"\n Staff Name:"<<name;
            cout<<"\n Staff Post:"<<post;
        }
};
int main()
{
    Staff *s1= new Staff[3];
    Staff *p;
    int i;
    p=&s1[0];
    for(i=0;i<3;i++)
    {
        p->getdata();
        p++;
    }
    p=&s1[0];
    for(i=0;i<3;i++) 
    {
        p->putdata();
        p++;
    }
}
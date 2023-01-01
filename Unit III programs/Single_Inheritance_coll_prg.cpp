#include<iostream>
using namespace std;
class College1
{
    protected:
        int coll_id;
        char coll_name[20];
        char coll_address[20];
    public:
        void getdata()
        {
            cout<<"\n Enter College ID:";
            cin>>coll_id;
            cout<<"\n Enter College Name:";
            cin>>coll_name;
            cout<<"\n Enter College Address:";
            cin>>coll_address;
        }
};
class College2:public College1
{
    public:
        void display()
        {
            cout<<"\n College Id:"<<coll_id;
            cout<<"\n College Name:"<<coll_name;
            cout<<"\n College Address:"<<coll_address;
        }
};
int main()
{
    College2 c2;
    c2.getdata();
    c2.display();
    return 0;
}
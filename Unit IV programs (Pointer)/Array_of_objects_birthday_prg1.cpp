#include<iostream>
using namespace std;
class Birthday
{
    private:
        char day[15];
        char month[15];
        int year;
    public:
        void get_data()
        {
            cout<<"\n Enter the day:";
            cin>>day;
            cout<<"\n Enter birth month:";
            cin>>month;
            cout<<"\n Enter Birth year:";
            cin>>year;
        }
        void disp_data()
        {
            cout<<"\n Birth Day:"<<day;
            cout<<"\n Birth Month:"<<month;
            cout<<"\n Birth Year:"<<year;
        }
};
int main()
{
    Birthday b1[5],*p;
    int i;
    p=&b1[0];
    for(i=0;i<5;i++)
    {
        p->get_data();
        p++;
    }
    p=&b1[0];
    for(i=0;i<5;i++)
    {
        p->disp_data();
        p++;
    }
    return 0;
}
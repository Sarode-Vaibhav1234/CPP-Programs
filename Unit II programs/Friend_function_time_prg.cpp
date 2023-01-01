#include<iostream>
using namespace std;
class time
{
    private:
            int min,hour,second;
    public:
            void getdata()
            {
                cout<<"\n Enter time in hour:";
                cin>>hour;
                cout<<"\n Enter time in minutes:";
                cin>>min;
                cout<<"\n Enter time in seconds:";
                cin>>second;
            }
            friend  void putdata(time s);
};
void putdata(time s)
{
    cout<<"\n *** Your time ***";
    cout<<"\n "<<s.hour<<":"<<s.min<<":"<<s.second<<endl;
}
int main()
{
    time t1[3];
    int i;
    for(i=0;i<3;i++)
    {
        t1[i].getdata();
    }
    for(i=0;i<3;i++)
    {
        putdata(t1[i]);
    }
    return 0;
}
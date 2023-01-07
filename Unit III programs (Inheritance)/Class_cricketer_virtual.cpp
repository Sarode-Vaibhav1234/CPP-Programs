#include<iostream>
using namespace std;
class Cricketer
{
    private:
        char name[15];
        int highest_score;
    public:
        void get_cricketer_info()
        {
            cout<<"\n Enter Cricketer Name:";
            cin>>name;
            cout<<"\n Enter Cricketer Highest Score:";
            cin>>highest_score;
        }
        void disp_cricketer_info()
        {
            cout<<"\n Criketer Name:"<<name;
            cout<<"\n Cricketer Highest Score:"<<highest_score;
        }
};
class Batsman:virtual public Cricketer
{
    protected:
        char name[20];
        long runs;
    public:
        void get_batsman_info()
        {
            cout<<"\n Enter Batsman Name:";
            cin>>name;
            cout<<"\n Enter Batsman Runs:";
            cin>>runs;
        }
        void disp_batsman_info()
        {
            cout<<"\n Batsman Name:"<<name;
            cout<<"\n Batsman Runs:"<<runs;
        }
};
class Bowler:virtual public Cricketer
{
    private:
        char name[20];
        int no_of_wickets;
    public:
        void get_bowler_info()
        {
            cout<<"\n Enter Bowler Name:";
            cin>>name;
            cout<<"\n Enter No of wickets by bowler:";
            cin>>no_of_wickets;
        }
        void disp_bowler_info()
        {
            cout<<"\n Bowler Name:"<<name;
            cout<<"\n No of Wickets:"<<no_of_wickets;
        }
};
class All_rounder:public Batsman,public Bowler
{
    private:
        int score;
        char name[20];
    public:
        void get_all_rounder_info()
        {
            cout<<"\n Enter All Rounder Name:";
            cin>>name;
            cout<<"\n Enter All Rounder score:";
            cin>>score;
        }
        void disp_all_rounder_info()
        {
            cout<<"\n All Rounder Name:"<<name;
            cout<<"\n All Rounder Score:"<<score;       
        }
};
int main()
{
    All_rounder a1;
    a1.get_cricketer_info();
    a1.get_batsman_info();
    a1.get_bowler_info();
    a1.get_all_rounder_info();
    a1.disp_cricketer_info();
    a1.disp_batsman_info();
    a1.disp_bowler_info();
    a1.disp_all_rounder_info();
    return 0;
}

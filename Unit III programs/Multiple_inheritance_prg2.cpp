#include<iostream>
using namespace std;
class Student
{
    private:
        int roll_no;
        char name[15];
    public:
        void get_stud_info()
        {
            cout<<"\n Enter Student Roll no:";
            cin>>roll_no;
            cout<<"\n Enter Student Name:";
            cin>>name;
        }
        void disp_stud_info()
        {
            cout<<"\n Student Roll No:"<<roll_no;
            cout<<"\n Student Name:"<<name;
        }
};
class Liabrary
{
    private:
        int book;
    public:
        void get_lia_info()
        {
            cout<<"\n Enter Books in Liabrary:";
            cin>>book;
        }
        void disp_lia_info()
        {
            cout<<"\n Books in Liabrary:"<<book;
        }
};
class Exam:public Student,public Liabrary
{
    private:
        float percentage;
    public:
        void get_exam_info()
        {
            cout<<"\n Enter Percentage:";
            cin>>percentage;
        }
        void disp_exam_info()
        {
            cout<<"\n Percentage:"<<percentage;
        }
};
int main()
{
    Exam E1;
    E1.get_stud_info();
    E1.get_lia_info();
    E1.get_exam_info();
    E1.disp_stud_info();
    E1.disp_lia_info();
    E1.disp_exam_info();
    return 0;
}
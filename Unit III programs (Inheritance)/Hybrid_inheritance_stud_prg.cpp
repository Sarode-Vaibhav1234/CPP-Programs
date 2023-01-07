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
            cout<<"\nEnter Student Roll no:";
            cin>>roll_no;
            cout<<"\nEnter Student Name:";
            cin>>name;
        }
        void disp_stud_info()
        {
            cout<<"\nStudent Roll No:"<<roll_no;
            cout<<"\nStudent Name:"<<name;
        }
};
class Test:public Student
{
    protected:
        int marks1;
        int marks2;
    public:
        void get_marks_info()
        {
            cout<<"\nEnter Test 1 marks:";
            cin>>marks1;
            cout<<"\nEnter Test 2 marks:";
            cin>>marks2;
        }
        void disp_marks_info()
        {
            cout<<"\nTest 1 marks:"<<marks1;
            cout<<"\nTest 2 marks:"<<marks2;
        }
};
class Sports
{
    protected:
        char grade;
    public:
        void get_sports_info()
        {
            cout<<"\nEnter Sports Grade:";
            cin>>grade;
        }
        void disp_sport_info()
        {
            cout<<"\nSports Grade:"<<grade;
        }
};
class Result:public Test,public Sports
{
    private:
        float per;
    public:
        void get_result_info()
        {
            cout<<"\nEnter Students Percentage:";
            cin>>per;
        }
        void disp_result_info()
        {
            cout<<"\nStudent Percentage:"<<per;
        }
};
int main()
{
    Result r1;
    r1.get_stud_info();
    r1.get_marks_info();
    r1.get_sports_info();
    r1.get_result_info();
    r1.disp_stud_info();
    r1.disp_marks_info();
    r1.disp_sport_info();
    r1.disp_result_info();
    return 0;
}
#include<iostream>
using namespace std;
class Student
{
    protected:
        int roll_no;
        char name[20];
    public:
        void get_stud_info()
        {
            cout<<"\n Enter Student Roll No:";
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
class Test
{
    protected:
        int marks1,marks2;
    public:
        void get_marks_info()
        {
            cout<<"\n Enter Class Test 1 marks:";
            cin>>marks1;
            cout<<"\n Enter Class Test 2 marks:";
            cin>>marks2;
        }
        void disp_marks_info()
        {
            cout<<"\n Class Test 1 Marks:"<<marks1;
            cout<<"\n Class Test 2 Marks:"<<marks2;
        }
};
class Result:public Student,public Test
{
    public:
        void disp_result_info()
        {
            cout<<"\n Average Marks:"<<(marks1+marks2)/2;
        }
};
int main() 
{
    Result r1;
    r1.get_stud_info();
    r1.get_marks_info();
    r1.disp_stud_info();
    r1.disp_marks_info();
    r1.disp_result_info();
    return 0;
}
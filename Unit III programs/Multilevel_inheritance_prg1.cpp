#include<iostream>
using namespace std;
class Student
{
    protected:
        int roll_no;
        char name[20];
    public:
    void getdata()
    {
        cout<<"\n Enter Student Roll_no:";
        cin>>roll_no;
        cout<<"\n Enter Student Name:";
        cin>>name;
    }
    void putdata()
    {
        cout<<"\n Student Roll No:"<<roll_no;
        cout<<"\n Student Name:"<<name;
    }
};
class test:public Student
{
    public:
        int marks1,marks2;
        void get_marks_info()
        {
            cout<<"\n Enter 1st test marks:";
            cin>>marks1;
            cout<<"\n Enter 2nd test marks:";
            cin>>marks2;
        }
        void put_marks_info()
        {
            cout<<"\n 1st test marks:"<<marks1;
            cout<<"\n 2nd test marks:"<<marks2;
        }
};
class Average:public test
{
    public:
    void display_average()
    {
        cout<<"\n Average marks="<<(marks1+marks2)/2;
    }
};
int main()
{
    Average a1;
    a1.getdata();
    a1.get_marks_info();
    a1.putdata();
    a1.display_average();
}
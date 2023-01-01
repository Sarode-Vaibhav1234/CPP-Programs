#include<iostream>
using namespace std;
class Staff
{
    private:
        int id;
        char name[20];
    public:
        void get_staff_info()
        {
            cout<<"\n Enter Teacher Id:";
            cin>>id;
            cout<<"\n Enter Teacher name:";
            cin>>name;
        }
        void disp_staff_info()
        {
            cout<<"\n Teacher Id:"<<id;
            cout<<"\n Teacher Name:"<<name;
        }
};
class Teacher:public Staff
{
    private:
        char subject[15];
    public:
        void get_teacher_info()
        {
            cout<<"\n Enter Subject of Teacher:";
            cin>>subject;
        }
        void disp_teacher_info()
        {
            cout<<"\n Subject Name:"<<subject;
        }
};
class Grade:public Staff
{
    private:
        char grade;
    public:
        void get_grade_info()
        {
            cout<<"\n Enter Teacher Grade:";
            cin>>grade;
        }
        void disp_grade_info()
        {
            cout<<"\n Teacher Grade:"<<grade;
        }
};
int main()
{
    Teacher t1;
    Grade g1;
    t1.get_staff_info();
    t1.get_teacher_info();
    g1.get_grade_info();
    t1.disp_staff_info();
    t1.disp_teacher_info();
    g1.disp_grade_info();
    return 0;
}
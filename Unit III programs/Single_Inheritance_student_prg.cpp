#include <iostream>
using namespace std;
class student
{
    protected:
        int roll_no;
        char name[10];
    public:
        void get_data()
        {
            cout<<"\n Enter Student Roll No : ";
            cin>>roll_no;
            cout<<"\n Enter Student Name : ";
            cin>>name;
        }
        void display_data()
        {
            cout<<"\n Student Roll No : "<<roll_no;
            cout<<"\n Student Name : "<<name;
        }
};
class marks:public student
{
    protected:
        int marks1,marks2;
    public:
        void get_marks_info()
        {
            cout<<"\n Enter Class Test 1 marks : ";
            cin>>marks1;
            cout<<"\n Enter Class Test 2 Marks : ";
            cin>>marks2;
        }
        void put_marks_info()
        {
            cout<<"\n Class Test 1 Marks : "<<marks1;
            cout<<"\n Class Test 2 Marks : "<<marks2;
        }
};
int main()
{
    marks m1;
    m1.get_data();
    m1.get_marks_info();
    m1.display_data();
    m1.put_marks_info();
   
    return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    private:
        int id;
        char name[20];
    public:
        Employee()
        {
            cout<<"\n Enter employee Id:";
            cin>>id;
            cout<<"\n Enter employee Name:";
            cin>>name;
        }
        void display()
        {
            cout<<"\n Employee ID:"<<id;
            cout<<"\n Employee Name:"<<name;
        }
        Employee (Employee &m)
        {   
            id=m.id;
            strcpy(name,m.name);
        }
};
int main()
{
    Employee e1;
    Employee e2(e1);
    cout<<"\n Employee details of object e1:";
    e1.display();
    cout<<"\n Employee details of object e2:";
    e2.display();
    return 0;
}
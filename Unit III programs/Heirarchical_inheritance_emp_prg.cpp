#include<iostream>
using namespace std;
class Employee
{
    private:
        int id;
        char name[20];
    public:
        void get_employee_info()
        {
            cout<<"\nEnter Employee ID:";
            cin>>id;
            cout<<"\nEnter Employee Name:";
            cin>>name;
        }
        void disp_employee_info()
        {
            cout<<"\nEmployee Id:"<<id;
            cout<<"\nEmployee Name:"<<name;
        }
};
class Record:public Employee 
{
    private:
        char address[20];
    public:
        void get_record_info()
        {
            cout<<"\nEnter Employee Adderss:";
            cin>>address;
        }  
        void disp_record_info()
        {
            cout<<"\nEmployee Address:"<<address;
        }
};
class Account:public Employee
{
    private:
        int salary;
    public:
        void get_account_info()
        {
            cout<<"\nEnter Employee Salary:";
            cin>>salary;
        }
        void disp_account_info()
        {
            cout<<"\nEmployee Salary:"<<salary;
        }
};
int main()
{
    Record r1;
    Account a1;
    r1.get_employee_info();
    r1.get_record_info();
    a1.get_account_info();
    r1.disp_employee_info();
    r1.disp_record_info();
    a1.disp_account_info();
    return 0;
}
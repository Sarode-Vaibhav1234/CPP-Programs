#include<iostream>
using namespace std;
class Employee
{
    int emp_id;
    char emp_name[20];
    public:
        Employee()
        {
            cout<<"\n Enter Employee ID:";
            cin>>emp_id;
            cout<<"\n Enter Employee Name:";
            cin>>emp_name;
        }
        void putdata()
        {
            cout<<"\n Employee ID:"<<emp_id;
            cout<<"\n Employee Name:"<<emp_name;
        }
};
class Salary:private Employee
{
    float Basic,HRA,DA,CLA;
    public:
        Salary():Employee()
        {
            cout<<"\n Enter Employee Basic Pay:";
            cin>>Basic;
            cout<<"\n Enter Employee HRA:";
            cin>>HRA;
            cout<<"\n ENter Employee DA:";
            cin>>DA;
            cout<<"\n Enter Employee ClA:";
            cin>>CLA;
        }
        void calculate_salary()
        {
            putdata();
            cout<<"\n Basic Pay:"<<Basic;
            cout<<"\n HRA:"<<HRA;
            cout<<"\n DA:"<<DA;
            cout<<"\n CLA:"<<CLA;
            float Gross;
            Gross=(Basic+HRA+DA+CLA);
            cout<<"\n Gross Salary:"<<Gross;
        }
};
int main()
{
    Salary s1;
    s1.calculate_salary();
    return 0;
}
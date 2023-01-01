#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    ofstream fout;
    char ch;
    char name[20];
    int id;
    char address[20];
    fout.open("Employee.txt",ios::app);
    cout<<"\n Enter Employee Name:";
    cin>>name;
    cout<<"\n Enter Employee Id:";
    cin>>id;
    cout<<"\n Enter Employee Address:";
    cin>>address;
    fout<<"\n"<<name<<setw(10)<<id<<setw(10)<<address;
    cout<<"\n Employee Details inserted sucessfully";
    fout.close();
}
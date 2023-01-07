#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    ofstream fout;
    int i,n;
    char name[20];
    int id;
    char address[20];
    fout.open("Employee.txt",ios::app);
    cout<<"\n Enter how many Employee Details you want to insert:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter Employee Name:";
        cin>>name;
        cout<<"\n Enter Employee Id:";
        cin>>id;
        cout<<"\n Enter Employee Address:";
        cin>>address;
        fout<<"\n"<<name<<"\t"<<id<<"\t"<<address;
    }
    cout<<"\n Employee File Written sucessfully!!!";
    fout.close();
}
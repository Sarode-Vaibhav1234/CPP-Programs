#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    private:
        int id;
        char name[20];
    public:
        void get_data()
        {
            cout<<"\n Enter Employee Id:";
            cin>>id;
            cout<<"\n Enter Employee Name:";
            cin>>name;  
        }
        void get_data(int id1, char name1[20])
        {
            id=id1;
            strcpy(name,name1);
        }
        void get_data(char name2[20])
        {
            cout<<"\n Enter Employee Id:";
            cin>>id;
            strcpy(name,name2);
        }
        void display()
        {
            cout<<"\n Employee ID:"<<id;
            cout<<"\n Employee Name:"<<name;
        }
};
int main()
{
    int id1;
    char name1[20],name2[20];
    Book b1,b2,b3;
    b1.get_data();
    cout<<"\n Enter Employee Id:";
    cin>>id1;
    cout<<"\n Enter Employee Name:";
    cin>>name1;
    b2.get_data(id1,name1);
    b3.get_data(name2);
    cout<<"\n Enter Employee Name:";
    cin>>name2;
    b1.display();
    b2.display();
    b3.display();
    return 0;
}
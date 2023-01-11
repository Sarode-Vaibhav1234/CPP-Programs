/*Define a class named ‘Train’ representing following members: 
Data members:- 
 - Train Number 
 - Train Name 
 - Source 
 - Destination 
 - Journey Date 
 - Capacity 
Member Functions: 
 - Initialize Members 
 - Input Train Data 
 - Display Data 
Write a C++ program to test the train class.*/
#include<iostream>
#include<string.h>
using namespace std;
class Train
{
    int Train_Number; 
    char Train_Name[20]; 
    char Source[20]; 
    char Destination[20]; 
    char Journey_Date[10]; 
    int Capacity; 
    public:
        Train()
        {
            Train_Number=0;
            strcpy(Train_Name,"");
            strcpy(Source,"");
            strcpy(Destination,"");
            strcpy(Journey_Date,"");
            Capacity=0;
        }
        void get_data()
        {
            cout<<"\n Enter Train Number:";
            cin>>Train_Number;
            cout<<"\n Enter Train Name:";
            cin>>Train_Name;
            cout<<"\n Enter Train Source:";
            cin>>Source;
            cout<<"\n Enter Train Destination:";
            cin>>Destination;
            cout<<"\n Enter Train Journey Date:";
            cin>>Journey_Date;
        }
        void disp_data()
        {
            cout<<"\n Train Number:"<<Train_Number;
            cout<<"\n Train Name:"<<Train_Name;
            cout<<"\n Train Source Location:"<<Source;
            cout<<"\n Train Destination Location:"<<Destination;
            cout<<"\n Train Journey Date:"<<Journey_Date;
        }
};
int main()
{
    Train t1;
    t1.get_data();
    t1.disp_data();
    return 0;
}
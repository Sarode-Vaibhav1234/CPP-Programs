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
using namespace std;
class train
{
	private:
		int no;
		char name[10];
		char source[20];
		char destination[20];
		int capacity;
		char date[10];
	public:
		void initialize()
		{
			cout<<"\n Enter Train number:";
			cin>>no;
			cout<<"\n Enter Train Name:";
			cin>>name;
			cout<<"\n Enter Train source location:";
			cin>>source;
			cout<<"\n Enter Train destination location:";
			cin>>destination;
			cout<<"\n Enter Journey date of train:";
			cin>>date;
			cout<<"\n Enter capacity of train:";
			cin>>capacity;
		}
		void display_train_info()
		{
			cout<<"\n ***************** Train Information *****************";
			cout<<"\n Train no:"<<no;
			cout<<"\n Train Name:"<<name;
			cout<<"\n Train Source Location:"<<source;
			cout<<"\n Train Destination Location:"<<destination;
			cout<<"\n Journey Date:"<<date;
			cout<<"\n Capacity of train:"<<capacity;
		}
}; 
int main()
{
	train t1,t2;
	t1.initialize();
	t2.initialize();
	t1.display_train_info();
	t2.display_train_info();
	return 0;
	
}
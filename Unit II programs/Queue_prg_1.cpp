#include<iostream>
using namespace std;
#define MAX 5
char data[MAX];
int rear,front;

void Initialize();
int Empty();
int Full();
void Insertion();
void Deletion();
void Print();

int main()
{

    int ch;
    Initialize();
    do
    {
        cout<<"\n***QUEUE MENU*";
        cout<<"\n1. Insertion";
        cout<<"\n2. Deletion";
        cout<<"\n3. Print";
        cout<<"\n4. Exit";
        cout<<"\nEnter Your Choice:";
        cin>>ch;
        switch(ch)
        {
            case 1: Insertion();
                break;
            case 2: Deletion();
                break;
            case 3: Print();
                break;
            case 4: cout<<"\nThanks for using our Software";
                break;
            default:cout<<"\nPlease enter valid choice!!!";
                break;
        }
    }while(ch!=4);
    return 0;
}
void Initialize()
{
    rear=front=-1;
}
int Full()
{
    if(rear==MAX-1)
	return(1);
    else
	return(0);
}
void Insertion()
{
    if(Full()==0)    
    {
        char x;
        cout<<"\nEnter Data:";
        cin>>x;
        if(rear==-1)
        {  
            front=rear=0;
            data[rear]=x;
        }
        else
        {
            rear=rear+1;
            data[rear]=x;
        }
        cout<<"\nData Inserted Successfully!!!";
    }
    else
    {
        cout<<"\nQueue is FULL!!!";
    }
}
int Empty()
{
    if(rear==-1)
        return(1);
    else
        return(0);
}
void Deletion()
{
    if(Empty()==0)
    {   
        char x;
        x=data[front];
        if(front==rear)
        {   
            front=rear=-1;
        }
        else
        {
            front=front+1;
        }
        cout<<"\nDeleted data:"<<x;     
    }
    else
    {
        cout<<"\nQueue is EMPTY!!!";    
    }
}
void Print()
{
    int i;
    if(rear==-1)
    {
        cout<<"\nQueue is Empty hence no data available for printing!!!";
    }
    else
    {
        cout<<"\nQueue Data:";
        for(i=front;i<=rear;i++)
        {           
            cout<<data[i]<<"\t";    
        } 
    }
}
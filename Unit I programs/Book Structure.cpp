//Write a program for book structure
#include<iostream>
using namespace std;
struct book
{
	int book_id;
	char book_name[15];
	char book_author[15];
	int book_price;
}b[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"\n Enter Book Id : ";
		cin>>b[i].book_id;
		cout<<"\n Enter Book name : ";
		cin>>b[i].book_name;
		cout<<"\n Enter Book Author : ";
		cin>>b[i].book_author;
		cout<<"\n Enter Book Price : ";
		cin>>b[i].book_price;	
	}
	cout<<"\n ************ Book Management System ************";
	cout<<"\n\nBook Id\t Book Name\t Book Author\t Book price";
	for(i=0;i<3;i++)
	{
		cout<<"\n"<<b[i].book_id<<"\t"<<b[i].book_name<<"\t\t"<<b[i].book_author<<"\t\t"<<b[i].book_price;
	}
	return 0;
}

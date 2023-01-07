//Write a programto implement parameterised constructor college
#include<iostream>
#include<string.h>
using namespace std;
class college
{
	private:
		int coll_id;
		char name[10];
		int no_of_stud;
	public:
		college(int id, char n[10], int stud)
		{
			coll_id=id;
			strcpy(name,n);
			no_of_stud=stud;	
		}
		void display_data()
		{
			cout<<"\n College Id : "<<coll_id;
			cout<<"\n College Name : "<<name;
			cout<<"\n No of Students in College : "<<no_of_stud;
		}
};
int main()
{
	college c1(1010,"GPA",1200);
	c1.display_data();
	return 0;
}

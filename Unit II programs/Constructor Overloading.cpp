//Constructor Overloading
#include<iostream>
#include<string.h>
using namespace std;
class college
{
	private:
		int coll_id;
		char coll_name[20];
		int no_of_stud;
	public:
		college()
		{
			coll_id=1010;
			strcpy(coll_name,"GPS");
			no_of_stud=2300;
		}
		college(int x, char y[10], int z)
		{
			coll_id=x;
			strcpy(coll_name,y);
			no_of_stud=z;
		}
		college(char p[10])
		{
			coll_id=2020;
			strcpy(coll_name,p);
			no_of_stud=1500;
		}
		void display_data()
		{
			cout<<"\n College Id :"<<coll_id;
			cout<<"\n College Name :"<<coll_name;
			cout<<"\n No of Student in College :"<<no_of_stud;
		}
};
int main()
{
	college c1;
	college c2(1050,"GPP",3000);
	college c3("KKWP");
	c1.display_data();
	c2.display_data();
	c3.display_data();
	return 0;
}

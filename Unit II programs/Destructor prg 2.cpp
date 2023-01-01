//Destructor in detail
#include<iostream>
using namespace std;
int count;
class sample
{
	private:
		static int count;
	public:
		sample()
		{
			count++;
			if(count==1)
				cout<<count<<" st object created"<<endl;
			else if(count==2)
				cout<<count<<" nd object created"<<endl;
			else if(count==3)
				cout<<count<<" rd object created"<<endl;
			else 
				cout<<count<<" th object created"<<endl;
		}
		~sample()
		{
			if(count==1)
				cout<<count<<" st object destroyed"<<endl;
			else if(count==2)
				cout<<count<<" nd object destroyed"<<endl;
			else if(count==3)
				cout<<count<<" rd object destroyed"<<endl;
			else 
				cout<<count<<" th object destroyed"<<endl;
			count--;
		}
};
int sample :: count;
int main()
{
	sample s1,s2;
	{
		sample s3;
	}
	{
		sample s4;
	}
	sample s5;
	return 0;
}

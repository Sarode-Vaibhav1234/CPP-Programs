//Write a program to display given alphabet is vowel or consonant
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\n Enter any alphabet : ";
	cin>>ch;
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	{
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		{
			cout<<"\n Given Alphabet is Vowel";
		}
		else
		{
			cout<<"\n Given Alphabet is Consonant";
		}
	}
	else
	{
		cout<<"\n Invalid Alphabet !!!";
	}

	return 0;
}

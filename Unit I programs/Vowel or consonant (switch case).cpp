//Write a program to find weather the number is vowel or consonant using Switch case
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any Alphabet : ";
	cin>>ch;
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			cout<<"Enter alphabet is Vowel";
			break;
		default :
			cout<<"You have entered Consonant";
	}
	return 0;
}

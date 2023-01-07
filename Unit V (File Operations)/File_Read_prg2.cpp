#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    int count=0;
    fin.open("File.txt",ios::in);
    cout<<"\n No of spaces in the file : "<<count;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch==' ')
        {
            count++;
        }
    }
    cout<<"\n No of spaces in the file : "<<count;
    return 0;
}
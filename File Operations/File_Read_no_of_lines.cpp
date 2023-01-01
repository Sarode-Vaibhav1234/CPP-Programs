#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    int count=1;
    fin.open("File.txt",ios::in);
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch=='\n')
        {
            count++;
        }
    }
    cout<<"\n No of lines present in file :"<<count;
    fin.close();
    return 0;
}
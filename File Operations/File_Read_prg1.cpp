#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("File.txt",ios::in);
    while(!fin.eof())
    {
        fin.get(ch);
        cout<<ch;   
    }
    fin.close();
    return 0;
}
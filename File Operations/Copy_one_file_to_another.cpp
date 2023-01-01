#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open("File.txt",ios::in);
    fout.open("File2.txt",ios::out);
    while(!fin.eof())
    {
        fin.get(ch);
        fout<<ch;
    }
    cout<<"\n File copied sucessfully";
    fin.close();
    fout.close();
    return 0;
}
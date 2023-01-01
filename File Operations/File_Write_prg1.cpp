#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("File.txt",ios::out);
    fout<<"Welcome to India\nWelcome to Maharashtra\nWelcome to Ahmednagar";
    cout<<"\n Message written sucessfully";
    fout.close();
    return 0;
}
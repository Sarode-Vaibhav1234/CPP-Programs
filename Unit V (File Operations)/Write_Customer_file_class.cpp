#include<iostream>
#include<fstream>
using namespace std;
class Customer
{
    char cust_name[20];
    char mobile_no[10];
    public:
        Customer()
        {
            cout<<"\n Enter Customer Name:";
            cin>>cust_name;
            cout<<"\n Enter Customer Mobile no:";
            cin>>mobile_no;
        }
        void disp_data();
};
void Customer :: disp_data()
{
    ofstream fout;
    fout.open("Customer.txt",ios::out);
    fout<<"\n "<<cust_name<<"\t "<<mobile_no;
}
int main()
{
    int n,i;
    cout<<"\n Enter how many Customer details you want:";
    cin>>n;
    cout<<"\n Enter "<<n<<" customer details..."<<endl;
    //fout<<"\n *** Customer Details ***"<<endl;
    Customer c[n];
    for(i=0;i<n;i++)
        c[i].disp_data();
    cout<<"\n File written sucessfully";
    return 0;
}
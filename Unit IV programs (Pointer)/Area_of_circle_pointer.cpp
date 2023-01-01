#include<iostream>
using namespace std;
int main()
{
    float radius,*ptr,area;
    const float PI=3.14;
    cout<<"\n Enter the radius of circle:";
    cin>>radius;
    ptr=&radius;
    area=PI*(*ptr)*(*ptr);
    cout<<"\n Area of circle:"<<area;
    return 0;
}
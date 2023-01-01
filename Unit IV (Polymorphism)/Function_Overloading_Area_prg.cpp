#include<iostream>
using namespace std;
void area(int x,int y);
void area(float x);
void area(int x);
int main()
{
    float p=9.6;
    area(10,30);
    area((float)9.6);
    area(100);
    return 0;
}
void area(int x,int y)
{
    float area_t;
    int b,h;
    b=x;
    h=y;
    area_t=(float)0.5*b*h;
    cout<<"\n Area of Triangle:"<<area_t;
}
void area(float x)
{
    float r,area_c;
    r=x;
    area_c=3.14*r*r;
    cout<<"\n Area of Circle:"<<area_c;
}
void area(int x)
{
    int l,b=20,area_r;
    l=x;
    area_r=l*b;
    cout<<"\n Area of rectangle:"<<area_r;   
}
/* 8. Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle */
#include<iostream>
using namespace std;
int area(int,int);
float area(float b,float h);
float area(int r);
int main()
{
    int raduis,len,bre;
    float b,h;
    cout<<"Enter the value of radius :";
    cin>>raduis;
    cout<<endl<<"Enter the value of length and breath of Rectangle :";
    cin>>len>>bre;
    cout<<endl<<"Enter the value of base and height of Triangle :";
    cin>>b>>h;

    cout<<endl<<"Area of circle is "<<area(raduis);
    cout<<endl<<"Area of Rectangle is "<<area(len,bre);
    cout<<endl<<"Area of Triangle is "<<area(b,h);

}
float area(float b,float h)
{
    return (0.5 * b * h);
}
int area(int l,int b)
{
    return (l*b);
}
float area(int r)
{
    return (3.14*r*r);

}

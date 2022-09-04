/* 10. Write functions using function overloading to add two numbers having different data
types. */
#include<iostream>
using namespace std;
int add(int a , int b);
float add(float x , float y);
float add(int a , float y);
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter two Integer Value :";
    cin>>a>>b;
    cout<<endl<<"Enter two Float Value :";
    cin>>x>>y;

    cout<<"Sum of Integer is "<<add(a,b)<<endl;
    cout<<"Sum of Float is "<<add(x,y)<<endl;
    cout<<"Sum of Both is "<<add(a,y)<<endl;

    return 0;
}
int add(int a , int b)
{
    return (a+b);
}
float add(float x , float y)
{
    return (x+y);
}
float add(int a , float y)
{
    return (a+y);
}

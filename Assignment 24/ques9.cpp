/* 9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real. */
#include<iostream>
using namespace std;
int max(int a,int b);
float max(float x,float y);
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter two Integer values"<<endl;
    cin>>a>>b;
    cout<<"Enter two Float values"<<endl;
    cin>>x>>y;

    cout<<"Maximum in Integer is "<<max(a,b)<<endl;
    cout<<"Maximum in Float is "<<max(x,y)<<endl;
    return 0;
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
        return b;
}
float max(float x,float y)
{
    if(x>y)
    {
        return x;
    }
        return y;
}

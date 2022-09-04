// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
void add(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter two values"<<endl;
    cin>>a>>b;
    add(a,b);
    cout<<"Enter three values"<<endl;
    cin>>a>>b>>c;
    add(a,b,c);
}
void add(int a,int b,int c)
{
    int sum=0;
    sum=a+b+c;
    cout<<"Sum is "<<sum<<endl;
}

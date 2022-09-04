/* 5. Define a function to check whether a given number is a term in a Fibonacci series or
not. */

#include<iostream>
using namespace std;
int check(int n);
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(check(n))
        cout<<endl<<"Fibonacci series";
    else
    cout<<endl<<"Not a Fibonacci series";
}
int check(int n)
{
    int a=0,b=1,c,i;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
        if(c==n)
        {
            return 1;
        }
    }
    return 0;
}

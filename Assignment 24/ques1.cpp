// 1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(prime(num))
    {
        cout<<num<<"  is a prime";
    }
    else
    {
        cout<<num<<"  is not a prime";
    }

    return 0;
}
int prime(int num)
{
    int i;

    for(i=2;i<num/2S;i++)
    {
        if(num%i==0)
            return 0;
    }
        return 1;
}

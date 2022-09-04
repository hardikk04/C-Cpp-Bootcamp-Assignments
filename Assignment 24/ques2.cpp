// 2. Define a function to find the highest value digit in a given number.

#include<iostream>


using namespace std;
int high(int);

int mian()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<high(num)<< "is";
}
int high(int num)
{
    int m=-1;

    while(num)
    {
        num%10;
        if(num>m)
        {
            m=num;
        }
        num/10;
    }
    return m;
}

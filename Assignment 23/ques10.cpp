// 10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int a[10],i=0,sum=0;
    for(i=0;i<10;i++)
    {
        cout<<"Enter the "<<10-i<<" value on an array:";
        cin>>a[i];
        sum = sum + a[i];
    }
    cout<<"Total sum of an array is "<<sum;



}

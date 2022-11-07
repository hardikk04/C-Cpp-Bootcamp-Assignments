// 6. Write a C++ Program to find Sum of Array using function template.
#include<iostream>
using namespace std;
template<class T>
T Sum(T a[],T s)
{
    int temp=0;
    for(int i=0;i<s;i++)
    {
        temp= temp+a[i];
    }
    return temp;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<Sum(a,10);
}

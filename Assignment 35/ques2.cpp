// 2. Write a C++ Program to find Largest among two numbers using function template.
#include<iostream>
using namespace std;
template<class T>
T Max(T a,T b)
{
    return (a>b)?a:b;
}
int main()
{
    cout<<Max(5,10);
}

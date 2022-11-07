// 5. Write a C++ Program to Add two numbers using function template.
#include<iostream>
using namespace std;
template<class T>
T Add(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<Add(4.0,1.1);
}

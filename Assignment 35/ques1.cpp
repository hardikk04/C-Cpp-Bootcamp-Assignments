/* 1. Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates. */
#include<iostream>
using namespace std;
template<class T>
T add(T a,T b)
{
    return (a+b);
}
int main()
{

    cout<<add(5,6);
}

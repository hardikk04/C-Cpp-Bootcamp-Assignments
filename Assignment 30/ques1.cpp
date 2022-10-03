/* 1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks. */
#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 'a';
    }
    catch (int x)
    {
        cout<<"Caught "<<x;
    }
    catch (...)
    {
        cout<<"Default Expection";
    }
    return 0;
}

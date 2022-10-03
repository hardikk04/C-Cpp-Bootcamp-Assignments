/* 3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator. */
#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter 2 numbers for divide :";
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw "Dividend by Zero error";
        }
    }
    catch(const char *msg)
    {
        cout<<msg;
        return 0;
    }
    cout<<"Divide is "<<a/b;
    return 0;
}

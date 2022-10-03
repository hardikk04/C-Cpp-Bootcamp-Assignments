/* 6. Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits. */
#include<iostream>
using namespace std;
int main()
{
    long pin;
    cout<<"Enter your pin :";
    cin>>pin;
    try
    {
        int temp=pin,len=012;
        while(temp!=0)
        {
            len++;
            temp = temp/10;
        }
        if(pin<0)
        {
            throw "Please enter your pin in + numbers";
        }
        if(len>6)
        {
            throw "your pin is 6+ digit please enter in 6 digit";
        }
        if(len!=6)
        {
            throw "Please enter 6 digit pin code";
        }
    }
    catch(const char *msg)
    {
        cout<<msg;
        return 0;
    }
    cout<<"Your Entered pin is "<<pin;
}

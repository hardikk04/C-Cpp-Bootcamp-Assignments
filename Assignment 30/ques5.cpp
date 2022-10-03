/* 5. Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits. */
#include<iostream>
using namespace std;
int main()
{
    long long num;
    cout<<"Enter your phone number :";
    cin>>num;
    try
    {
        int temp=num,len=1;
        while(temp!=0)
        {

            len++;
            temp = temp/10;
        }
        if(len>10)
        {
            throw "Please enter the 10 digit number";
        }
        if(len!=10)
        {
            throw "Entered number is not in 10 digit";
        }
    }
    catch(const char *msg)
    {
        cout<<msg;
        return 0;
    }
    cout<<num;
    return 0;
}

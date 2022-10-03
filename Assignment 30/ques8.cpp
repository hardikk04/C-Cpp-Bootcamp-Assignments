/* 8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter. */
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char pass[20];
    cout<<"Enter your password"<<endl;
    gets(pass);
    int len = strlen(pass);
    try
    {
        if(len<6)
        {
            throw "Password must have 6 digit";
        }
        int flag=1;
        for(int i = 0; i<len;i++)
        {
            if(pass[i]>=65 && pass[i]<=90)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            throw "Password must contain atleast 1 Captial char";
        }
        int s=1;
        for(int i = 0; i<len;i++)
        {
            if(pass[i]>=1 && pass[i]<=64 || pass[i]>=91 && pass[i]<=95)
            {
                s = 0;
                break;
            }
        }
        if(s)
        {
            throw "Password must contain atleast 1 Specail char";
        }
        int d=1;
        for(int i = 0; i<len;i++)
        {
            if(pass[i]>=48 && pass[i]<=57)
            {
                d = 0;
                break;
            }
        }
        if(d)
        {
            throw "Password must contain atleast 1 Digit";
        }
    }
    catch(const char *msg)
    {
        cout<<msg;
        return 0;
    }
    cout<<"Your password is "<<pass;
    return 0;

}

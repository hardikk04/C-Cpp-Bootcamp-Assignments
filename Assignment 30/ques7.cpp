/* 7. Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol. */
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char username[20];
    cout<<"Enter your username :";
    gets(username);
    int len = strlen(username);
    try
    {
        if(len<6)
        {
            throw "Less than 6 character username are not allowed";
        }
        int flag = 1;
        for(int i=0;i<len;i++)
        {
            if(username[i]=='@')
                flag=0;
        }
        if(flag)
        {
            throw "Username must contain @ symbol";
        }
        int lag = 0;
        for(int i=0;i<len;i++)
        {
            if(username[i]==' ')
                lag=1;
        }
        if(lag)
        {
            throw "Space username is not allowed";
        }
    }
    catch(const char *msg)
    {
        cout<<msg;
        return 0;
    }
    cout<<"Your username is "<<username;
}

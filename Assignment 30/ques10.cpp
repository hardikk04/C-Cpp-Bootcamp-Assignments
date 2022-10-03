/* 10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space. */
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char nick[20];
    cout<<"Enter your nickname :";
    gets(nick);
    int len = strlen(nick);
    try
    {
        if(len<=8)
        {
            throw "Nickname must 8 char";
        }
        for(int i=0;i<len;i++)
        {
            if(nick[i]>=48&&nick[i]<=57)
            {
                throw "Digit not allowed";
            }
            if(nick[i]>=33 && nick[i]<=64 || nick[i]>=91 && nick[i]<=96)
                throw "Special char not allowed";
        }
    }
    catch(const char *msg)
    {
        cout<<msg;
        return 0;
    }
    cout<<nick;
    return 0;
}


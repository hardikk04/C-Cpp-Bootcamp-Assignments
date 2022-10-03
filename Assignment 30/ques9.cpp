/* 9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com. */
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char mail[50],ch[10]={"gmail.com"};
    cout<<"Enter your mail"<<endl;
    gets(mail);
    int len= strlen(mail);
    try
    {
        int a=1;
        for(int i=0;i<len;i++)
        {
            if(mail[i]=='@')
            {
                a=0;
            }
        }
        if(a)
        {
            throw "@ must";
        }
                int t=0;
        for(int i=0;i<len;i++)
        {
            if(mail[i]=='@')
            {
                for(int j=i+1;j<len;j++)
                {
                    if(mail[j]==ch[t])
                    {
                        t++;
                    }
                }
            }

        }
        if(t!=9)
        {
            throw "gmail.com must";
        }
    }
    catch(const char *msg)
    {
        cout<<msg;
        return 0;
    }
    cout<<mail;
}

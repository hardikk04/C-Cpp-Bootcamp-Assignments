/* 4. Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol. */
#include<iostream>
using namespace std;
int main()
{
    char email[50];
    cout<<"Enter your email"<<endl;
    gets(email);
    try
    {
            int count=0;
        for(int i=0;email[i];i++)
        {

            if(email[i]=='@')
            {
                count=1;
            }
        }
            if(count == 0)
            {
                throw "Your email does not contain @";
            }
            count = 0;
            for(int i=0;email[i];i++)
            {
                if(email[i]=='.')
                {
                    count = 1;
                }
            }
            if(count == 0)
            {
                throw exception();
            }
    }
    catch(const char *msg)
    {
        cout<<msg;
        return 0;
    }
    catch(...)
    {
        cout<<". error";
        return 0;
    }
    cout<<"Vaild mail"<<endl;
    cout<<email;

}

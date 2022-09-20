/* 9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa). */
#include<iostream>
#include<string.h>
using namespace std;
class Mystring
{
private:
    char str[100];
public:
    Mystring(){}
    Mystring(char c[])
    {
        strcpy(str,c);
    }
    Mystring operator!()
    {
        Mystring temp;
        int L=strlen(str);
        for(int i=0;i<L;i++)
        {
            if(str[i]>=65&&str[i]<=89)
            {
                temp.str[i]=str[i]+32;
            }
            else
            {
                if(str[i]>=97&&str[i]<=122)
                {
                    temp.str[i]=str[i]-32;
                }
            }
        }
        return temp;
    }
    void display()
    {
        cout<<str<<endl;
    }
    void operator=(const Mystring &m)
    {
        strcpy(str,m.str);
    }
    void input()
    {
        cout<<"Enter the string: ";
        gets(str);
    }
};
int main()
{
    Mystring m1,m2;
    m1.input();
    m2=!m1;
    m2.display();
}

/* 6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings. */
#include<iostream>
#include<string.h>
using namespace std;
class CString
{
private:
    char a[20],copy[20];

public:
    CString(){}
    CString(char str[])
    {
        strcpy(a,str);
    }
    void setString(char str[])
    {
        strcpy(a,str);
    }
    void showString()
    {
        cout<<"String is "<<a<<endl;
        cout<<"String with merge "<<a<<copy<<endl;
    }
   int operator==(CString s)
    {
        int res;
       res=strcmp(a,s.a);
       if(res==0)
        return 1;
       return 0;
    }
   CString operator+(CString str)
    {
        CString temp;
            strcpy(temp.a,a);
            strcpy(temp.copy,str.a);

        return temp;
    }

};
int main()
{
    CString c1,c2,c3;
    c1.setString("hardik");
    c2.setString("sisodiya");
    if(c2==c1)
        cout<<"same"<<endl;
    else
        cout<<"uni"<<endl;
        c3=c1+c2;
        c3.showString();

}

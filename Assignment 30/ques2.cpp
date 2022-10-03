// 2. Write a C++ program to demonstrate try, throw and catch statements.
#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value under 10 :";
    cin>>a;
    try
    {
        if(a>10)
        {
            throw "Wrong input";
        }
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
        return 0;
    }
    cout<<a;
}

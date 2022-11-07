// 3. Write a C++ program to find the largest of three elements using a template.
#include<iostream>
using namespace std;
template<class T>
T Max(T a,T b,T c)
{
    if(a>b)
    {
        if(a>c)
            return a;
    }
    else if(b>c)
    {
        return b;
    }
    else
        return c;
}
int main()
{
    cout<<Max(5,7,6);
}

// 9. Write a C++ Program to Perform Simple Addition Function Using Templates.
#include<iostream>
using namespace std;
template<class T>
T Add(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<Add(20,32);
}

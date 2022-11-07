// 4. Write a C++ Program to Swap data using function template.
#include<iostream>
using namespace std;
template<class T>
void Swap(T *a,T *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    int a=10,b=20;
    Swap(&a,&b);
    cout<<a<<" "<<b;
}

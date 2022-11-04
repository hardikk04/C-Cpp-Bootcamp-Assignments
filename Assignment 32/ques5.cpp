/* 5. Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance. */
#include<iostream>
using namespace std;
class A
{
public:
    A(int a)
    {
        cout<<"Base default constructor called"<<endl;
    }
};
class B:public A
{
public:
    B():A(2)
    {
        cout<<"Derived default constructor called"<<endl;
    }
};
int main()
{
    B b;

}

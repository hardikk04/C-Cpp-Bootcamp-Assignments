// 7. Write a C++ Program of Templated class derived from Non-templated class.
#include<iostream>
using namespace std;
template<class T>
class Base
{
public:
    int a,b;
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};
class Derived:public Base
{
public:
    T a,b;
   virtual void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    Base <int>b;
    b.a=10;
    b.b=20;
    b.display();
    return 0;
}

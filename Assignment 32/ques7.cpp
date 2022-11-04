// 7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.
#include<iostream>
using namespace std;
class Base
{
private:
    int a;
public:
    Base(){}
    Base(int a)
    {
        this->a=a;
    }
    void display()
    {
        cout<<a<<endl;
    }
    int getA()
    {
        return a;
    }
};
class Derived:public Base
{
private:
    int b;
public:
    Derived():Base(6){};
    void display()
    {
        b = getA();
        cout<<b<<endl;
    }
};
int main()
{
    Base b(5);
    b.display();
    Derived d;
    d.display();
}

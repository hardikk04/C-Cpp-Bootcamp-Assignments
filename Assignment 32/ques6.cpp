/*6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice. */

#include<iostream>
using namespace std;
class A
{
private:
    int a,b;
public:
    A(){}
        A(int a,int b)
        {
          this->a=a;
          this->b=b;
        }
       void display()
        {
            cout<<a+b<<endl;
        }
        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
};
class B:public A
{
private:
    int c;
public:
    B():A(6,6)
    {
    };
    B(int b)
    {
        c = b;
    }
    void display()
    {
        c=getA()+getB();
        cout<<c<<endl;
    }
};
class C:public B
{
private:
   int  d;
public:
    C(){}
    C(int d):B(10)
    {
        this ->d=d;
    }

    void display()
    {
        cout<<d;
    }
};
int main()
{
    A a(5,5);
    a.display();
    B b;
    b.display();
    C c(14);
    c.display();
}

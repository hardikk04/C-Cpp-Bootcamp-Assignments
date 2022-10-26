/* 2. Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class. */
#include<iostream>
using namespace std;
class Base
{
private:
    int a,b;
public:
    Base(){}
    Base(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void setData(int a,int b)
    {
        this->a=a;
        this->b=b;
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
class Derived:public Base
{
private:
    int sum;
public:
    int getSum(Base B)
    {
        sum = B.getA() + B.getB();
        return sum;
    }
};
int main()
{
    Base b1;
    b1.setData(12,20);
    Derived d1;
    cout<<"INHERITING BY BASE CLASS"<<endl;
    cout<<d1.getSum(b1);
}

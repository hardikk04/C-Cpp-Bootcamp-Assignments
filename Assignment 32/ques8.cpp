// 8. Write a C++ program to find the factorial of a number using copy constructor
#include<iostream>
using namespace std;
class Base
{
private:
    int a,fact=1;
public:
    Base(){};
    Base(int a)
    {
        this->a=a;
        for(int i=1;i<=a;i++)
        {
            fact = fact * i;
        }
    }
    void display()
    {
        cout<<"Factorial of "<<a<<" is "<<fact<<endl;
    }
};
int main()
{
    Base b(3);
    b.display();
}

/* 1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
return 0;
} */
#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    Complex(){}
    Complex(int r,int i)
    {
        real = r;
        img = i;
    }
    Complex(int r)
    {
        real = r;
    }
    void input(int r,int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout<<"Real ="<<real<<" Img = "<<img<<endl;
    }

};
int main()
{
    Complex c1;
    c1.input(20,10);
    c1.display();
    int x=5;
    c1=x;
    c1.display();
    return 0;
}

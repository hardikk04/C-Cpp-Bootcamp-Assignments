/* 2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
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
    void input(int r,int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout<<"Real ="<<real<<" Img ="<<img<<endl;
    }
    operator int()
    {
        return real;
    }
};
int main()
{
    Complex c1;
    c1.input(3,4);
    c1.display();
    int x;
    x=c1;
    cout<<x;
    return 0;
}

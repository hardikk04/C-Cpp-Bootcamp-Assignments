/* 1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator */
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
    void input()
    {
        cout<<"Enter real and img value:";
        cin>>real;
        cin>>img;
    }
    void display()
    {
        cout<<"Real "<<real<<" Img "<<img<<endl;
    }
    friend  ostream& operator<<(ostream &,Complex);
    friend  istream& operator>>(istream &,Complex &);

};
ostream& operator<<(ostream &os,Complex c)
{
    os<<"Real "<<c.real<<" Img "<<c.img<<endl;
    return os;
}
istream& operator>>(istream &c,Complex &C)
{
    c>>C.real;
    c>>C.img;
    return c;
}
int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    cout<<c1<<c2;
}

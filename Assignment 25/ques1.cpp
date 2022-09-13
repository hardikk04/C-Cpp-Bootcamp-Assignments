/* 1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number */

#include<iostream>
using namespace std;

class Complex
{
    private:
    int real,img;

    public:
    void Set()
    {
        cout<<"Enter the real and imaginary number:";
        cin>>real>>img;
    }

    void printf(Complex x)
    {
        cout<<real<<" + "<<img<<"i"<<endl;
        cout<<x.real<<" + "<<x.img<<"i"<<endl;
    }

    void add(Complex y)
    {
        real = real + y.real;
        img = img + y.img;

        cout<<"\n"<<real<<" + "<<img<<"i"<<endl;

    }

};

int main()
{
    Complex a,b;
    a.Set();
    b.Set();
    a.printf(b);
    cout<<endl<<"After add";
    a.add(b);

}

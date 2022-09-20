/* 1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex) */
#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,imaginary;
    public:
        void setData(int r,int i)
        {
            real=r;
            imaginary=i;
        }
        void showData()
        {
            cout<<"Real"<<real<<" + "<<"imaginary"<<imaginary<<endl;
        }
        Complex add(Complex C)
        {
            Complex temp;
            temp.real=C.real+real;
            temp.imaginary=C.imaginary+imaginary;
            return temp;
        }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(4,5);
    c1.showData();
    c2.setData(1,2);
    c2.showData();
    c3=c1.add(c2);
    c3.showData();


}

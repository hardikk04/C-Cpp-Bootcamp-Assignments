/* 1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. == */
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,img;
    public:
        Complex(int r,int i)
        {
            real = r;
            img = i;
        }
        Complex(){}
        void showData()
        {
            cout<<"Real"<<real<<" and img"<<img<<endl;
        }
        void setData(int r,int i)
        {
            real = r;
            img = i;
        }
        Complex operator+(Complex C)
        {
            Complex temp;
            temp.real = real + C.real;
            temp.img = img + C.img;
            return temp;
        }
        Complex operator-(Complex C)
        {
            Complex temp;
            temp.real = real - C.real;
            temp.img = img - C.img;
            return temp;
        }
        Complex operator*(Complex C)
        {
            Complex temp;
            temp.real = real * C.real;
            temp.img = img * C.img;
            return temp;
        }
        Complex operator==(Complex C)
        {
            Complex temp;
            temp.real = real == C.real;
            temp.img = img == C.img;
            return temp;
        }

};
int main()
{
    Complex c1,c2,c3;
    c1.setData(5,7);
    c2.setData(5,6);
    c3=c1*c2;
    c3.showData();


}

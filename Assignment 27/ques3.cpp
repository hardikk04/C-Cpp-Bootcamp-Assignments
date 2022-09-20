/* 3. Write a C++ program to add two complex numbers using operator overloaded by a
friend function. */
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
        void setData(int r,int i)
        {
            real = r;
            img = i;
        }
        void showData()
        {
            cout<<"Real"<<real<<" and "<<"Img"<<img<<endl;
        }
        friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex C1,Complex C2)
{
    Complex temp;
    temp.real = C1.real + C2.real;
    temp.img = C1.img + C2.img;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1+c2;
    c3.showData();
}


/* 2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables. */
#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    Complex(){}
    Complex(int real,int img):real(real),img(img)
    {
    }
    void setData(int real,int img)
    {
        real = real;
        img = img;
    }
    void display()
    {
        cout<<"Real "<<real<<" Img "<<img<<endl;
    }

};
int main()
{
    Complex c1(1,2);
    c1.display();
}

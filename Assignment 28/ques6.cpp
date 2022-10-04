// 6. Create a complex class and overload assignment operator for that class.
#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    Complex(){ cout<<"Default"<<endl; }
    Complex(int r,int i)
    {
        cout<<"Parameter"<<endl;
        real = r;
        img = i;
    }
    Complex(Complex &c)
    {
        cout<<"Copy"<<endl;
        real = c.real;
        img = c.img;
    }
    void display()
    {
        cout<<"Real "<<real<<" Img "<<img<<endl;
    }
    void change(int r,int i)
    {
        real = r;
        img = i;
    }

    void operator=(Complex &C)
    {
        cout<<"Assignment"<<endl;
        real = C.real;
        img = C.img;
    }

};
int main()
{
    Complex c1(1,2),c2=c1,c3;
    c3=c1;
    c1.change(5,6);
    c1.display();
    c2.display();
    c3.display();
}

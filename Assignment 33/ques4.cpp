/* 4. Create a base class called shape. Use this class to store 2 double type values that
could be used to compute the area of figures. Derive 2 specific classes called triangle
and rectangle from the base shape. Add to the base class a member function
get_data() to initialise base class data members and another member function
display_area() to compute and display the area of figures. Make display_area() as a
virtual function and redefine this function in derived classes to suit their requirements.
Using these 3 classes, design a program that will accept the dimensions of the
shapes interactively and display area. */
#include<iostream>
using namespace std;
class Shape
{
private:
    double a,b;
public:
    Shape(){}
    void getData()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>a>>b;
    }
    virtual void display()
    {
        getData();
        cout<<"Area of Triangle is "<<1/2*a*b<<endl;
        cout<<"Area of Rectangle is "<<a*b<<endl;
    }
    getA()
    {
        return a;
    }
    getB()
    {
        return b;
    }
};
class Rectangle:public Shape
{
public:
    Rectanlge(){}
    void display()
    {
        getData();
        cout<<"Area of Rectangle is "<<getA()*getB()<<endl;
    }
};
class Triangle:public Shape
{
public:
    Triangle(){}
    void display()
    {
        getData();
        cout<<"Area of Triangle is "<<1/2*getA()*getB()<<endl;
    }
};
int main()
{

    Shape r;
    r.display();
}

/*2. Extend the above program to display the area of circles. This requires the addition of
a new derived class 'circle' that computes the area of a circle. Remember, for a circle
we need only one value, its radius, but the get_data() function in the base class
requires two values to be passed. (Hint: Make the second argument of get_data()
function as a default one with zero value.) */
#include<iostream>
using namespace std;
class Shape
{
private:
    double a,b;
public:
    Shape(){}
    void getData(double x,double y=0)
    {
            a=x;
            b=y;

    }
    virtual void display()
    {
        cout<<"Area of Triangle is "<<1/2*a*b<<endl;
        cout<<"Area of Rectangle is "<<a*b<<endl;
        cout<<"Area of Circle is "<<3.13*a*a<<endl;
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
        cout<<"Area of Rectangle is "<<getA()*getB()<<endl;
    }
};
class Triangle:public Shape
{
public:
    Triangle(){}
    void display()
    {
        cout<<"Area of Triangle is "<<1/2*getA()*getB()<<endl;
    }
};
class Circle:public Shape
{
public:
    Circle(){}
    void display()
    {
        cout<<"Area of Circle is "<<3.14*getA()*getA()<<endl;
    }
};
int main()
{

    Rectangle r;
    r.getData(5,2);
    r.display();
}

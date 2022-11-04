/* 10. Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
square and parallelogram from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
square or a parallelogram interactively, and display the area. */
#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void setData()=0;
    virtual void display_area()=0;
};
class Square:public Shape
{
private:
    double side;
public:
    void setData()
    {
        cout<<"Enter the value of Side : ";
        cin>>side;
        cout<<endl;
    }
    void display_area()
    {
        cout<<"Area of Square is "<<side*side<<endl;
    }
};
class Parellogram:public Shape
{
private:
    double base,height;
public:
    void setData()
    {
        cout<<"Enter the value of Base and Height : ";
        cin>>base>>height;
        cout<<endl;
    }
    void display_area()
    {
        cout<<"Area of Square is "<<base*height<<endl;
    }
};
int main()
{
    Parellogram p;
    p.setData();
    p.display_area();
    Square s;
    s.setData();
    s.display_area();
}

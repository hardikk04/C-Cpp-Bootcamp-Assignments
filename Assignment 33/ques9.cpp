/* 9. Create a base class called volume. Use this class to store two double type values
that could be used to compute the volume of figures. Derive two specific classes
called cube and sphere from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_volume() to compute and display the volume of figures. Make
display_volume() as a virtual function and redefine this function in the derived
classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a cube
or a sphere interactively, and display the volume.
Area of cube = 6a*a
Area of Spher = 4pie R*r */
#include<iostream>
using namespace std;
class Volume
{
public:
    virtual void setData()=0;

    virtual void display_volume()=0;
};
class Cube:public Volume
{
 private:
     double c;
 public:
    void setData()
    {
        cout<<"Enter the value of Edge : ";
        cin>>c;
        cout<<endl;
    }
    void display_volume()
    {
        cout<<"Volume of Cube is "<<c*c*c<<endl;
    }
};
class Sphere:public Volume
{
 private:
     double s;
 public:
    void setData()
    {
        cout<<"Enter the value of Radius : ";
        cin>>s;
        cout<<endl;
    }
    void display_volume()
    {
        cout<<"Volume of Sphere is "<<4*(3.14*s*s*s)/3<<endl;
    }
};
int main()
{
    Sphere s;
    s.setData();
    s.display_volume();
}

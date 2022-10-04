/* 8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class. */
#include<iostream>
using namespace std;
class Coordinate
{
private:
    int x,y,z;
public:
    Coordinate(){ cout<<"Default"<<endl; }
    Coordinate(Coordinate &c)
    {
        cout<<"Copy"<<endl;
        x = c.x;
        y = c.y;
        z = c.z;
    }

    Coordinate(int a,int b,int c)
    {
        cout<<"Parameter"<<endl;
        x = a;
        y = b;
        z = c;
    }
    void input(int a,int b,int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout<<"X="<<x<<" Y="<<y<<" Z="<<z<<endl;
    }
    Coordinate operator,(Coordinate c)
    {
        Coordinate temp;
        temp.x = c.x;
        temp.y = c.y;
        temp.z = c.z;
        return temp;
    }
    void operator=(const Coordinate &c)
    {
        cout<<"Assignment"<<endl;
        x = c.x;
        y = c.y;
        z = c.z;
    }
};
int main()
{
    Coordinate c1(1,2,3),c2,c3;
    c2.input(4,5,6);
    c1.display();
    c2.display();
    c3 = (c1,c2);
    c3.display();
}

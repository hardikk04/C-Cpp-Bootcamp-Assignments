/* 10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc. */

#include<iostream>
using namespace std;

class Area
{
    private:

        int side,length,breadth,radius,square,rec;
        float circle;
        static float pi;

    public:

        void SetData(int s)
        {
            side = s;
        }

        void SetDataR(int r)
        {
            radius = r;
        }

        void SetData(int l,int b)
        {
            length = l;
            breadth = b;
        }

        void calRadius()
        {
            circle = pi * radius * radius;
        }

        void calSquare()
        {
            square = side * side;
        }
        void calRectangle()
        {
            rec = length * breadth;
        }
        int GetSquare()
        {
            return square;
        }
        float GetCircle()
        {
            return circle;
        }
        int GetRectangle()
        {
            return rec;
        }
};
float Area::pi=3.14;

int main()
{
    Area a1;

    a1.SetData(5);
    a1.calSquare();
    cout<<"Area of Square is "<<a1.GetSquare()<<endl;

    a1.SetDataR(5);
    a1.calRadius();
    cout<<"Area of Circle is "<<a1.GetCircle()<<endl;

    a1.SetData(5,6);
    a1.calRectangle();
    cout<<"Area of Rectangle is "<<a1.GetRectangle()<<endl;

    return 0;

}

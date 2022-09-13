/* 8. Define a class Rectangle and define an instance member function to find the area of
the rectangle. */

#include<iostream>
using namespace std;

class Rectangle
{
    private:

        int length,breadth,rec;

    public:

        void SetData(int l,int b)
        {
            length = l;
            breadth = b;
        }

        int GetLength()
        {
            return length;
        }

        int GetBreadth()
        {
            return breadth;
        }

        int GetRectangle()
        {
            return rec;
        }

        void cal()
        {
            rec= length * breadth;
        }

};

int main()
{
    Rectangle r1,r2;
    r1.SetData(4,5);
    r1.cal();
    cout<<"Area of Rectangle R1 is "<<r1.GetRectangle()<<endl;

    r2.SetData(3,7);
    r2.cal();
    cout<<"Area of Rectangle R2 is "<<r2.GetRectangle()<<endl;

}

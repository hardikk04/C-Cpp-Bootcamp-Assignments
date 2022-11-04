/* 9. Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven. */
#include<iostream>
using namespace std;
class Area
{
private:
    int triangle,rectangle;
    float circle;
public:
    Area(){}
    Area(int b,int h)
    {
        triangle = 1/2*h*b;
    }
    Area(long l,long w)
    {
        rectangle =w*l;
    }
    Area(float r)
    {
        circle =r*r*3.14;
    }
    void displayT()
    {
        cout<<"Area of triangle is "<<triangle<<endl;
    }
    void displayR()
    {
        cout<<"Area of Rectangle is "<<rectangle<<endl;
    }
    void displayC()
    {
        cout<<"Area of Circle is "<<circle<<endl;
    }
};
int main()
{
    while(true)
    {
        cout<<"Press 1 for Triangle"<<endl;
        cout<<"Press 2 for Rectangle"<<endl;
        cout<<"Press 3 for Circle"<<endl;
        cout<<"Press 0 for break"<<endl;
        int choice;
        cout<<"Enter your choice : ";
        cin>>choice;

        if(choice == 1)
        {
            int h,b;
            cout<<"Enter the height and breath :";
            cin>>h>>b;
            Area t(h,b);
            t.displayT();
        }
       else if(choice == 2)
        {
            long w,l;
            cout<<"Enter the Width and length :";
            cin>>w>>l;
            Area t(w,l);
            t.displayR();
        }
        else if(choice == 3)
        {
            float r;
            cout<<"Enter the Radius :";
            cin>>r;
            Area t(r);
            t.displayC();
        }
        else if(choice == 0)
        {
            return 0;
        }
        else if(choice < 3 || choice > 0)
        {
            cout<<"---------------------"<<endl;
            cout<<"Invalid"<<endl;
            cout<<"---------------------"<<endl;
        }

            }
}

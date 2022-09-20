/* 7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box. */

#include<iostream>
using namespace std;
class Box
{
    private:
        float lenght ,breadth,height,ans;
    public:
        Box(){};
        Box(float l,float b,float h)
        {
            lenght=l;
            breadth = b;
            height = h;
        };
        void cal()
        {
            ans=lenght*breadth*height;
        }
        void setData(float L,float B,float H)
        {
            lenght=L;
            breadth = B;
            height = H;
        }
        void showResult()
        {
            cout<<"Volume of the box is "<<ans<<endl;
        }
};
int main()
{
    float l,b,h;
    Box b1,b2(2,3,4);
    b1.setData(5.3,6.2,7.1);
    b1.cal();
    b1.showResult();
    b2.cal();
    b2.showResult();
}

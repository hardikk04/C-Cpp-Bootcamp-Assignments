/* 9. Define a class Circle and define an instance member function to find the area of the
circle. */

#include<iostream>
using namespace std;

class Circle
{
    private:

        int radius;
        float ans;
        static float pi;

    public:

        void SetData(int r)
        {
            radius=r;
        }

        int GetData()
        {
            return radius;
        }

        float GetAns()
        {
            return ans;
        }

        void cal()
        {
            ans = pi * radius * radius;
        }
};
float Circle::pi=3.14;
int main()
{
    Circle c1,c2;
    c1.SetData(5);
    c1.cal();
    cout<<"Area of Circle C1 is "<<c1.GetAns()<<endl;
    c2.SetData(8);
    c2.cal();
    cout<<"Area of Circle C2 is "<<c2.GetAns()<<endl;
}

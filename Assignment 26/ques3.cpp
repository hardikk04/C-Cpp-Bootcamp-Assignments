// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;

class Cube
{
    private:
        double side,volume;
    public:
        Cube()
        {
            cout<<"Default Constructor"<<endl;
            volume=0;
            side=0;
        }
        Cube(double side1)
        {
            cout<<"Constructor is called"<<endl;
            side=side1;
        }

        void setData(double num)
        {
            side=num;
        }
        int getData()
        {
            return side;
        }
        double getResult()
        {
            return volume;
        }
        void cal()
        {
            volume = side*side*side;
        }
        ~Cube()
        {
            cout<<endl<<"Destructing "<<side;
        }
};
int main()
{
    Cube c1,c2(2.34);
    double a;

    cout<<"Enter data for C1:";
    cin>>a;
    c1.setData(a);
    c1.cal();
    cout<<"Result is "<<c1.getResult()<<endl;
    c2.cal();
    cout<<endl<<"Result is "<<c2.getResult();
}

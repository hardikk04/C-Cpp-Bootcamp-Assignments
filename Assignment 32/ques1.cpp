/* 1. Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT. */
#include<iostream>
using namespace std;
class FLOAT
{
private:
    float f;
public:
    FLOAT(){}
    FLOAT(float f)
    {
        this->f=f;
    }
    void setData()
    {
        cout<<"Enter the value : ";
        cin>>f;
        cout<<endl;
    }
    void display()
    {
        cout<<"Value is "<<f<<endl;
    }
    FLOAT operator+(FLOAT f)
    {
       FLOAT temp;
       temp.f =this->f+f.f;
       return temp;
    }
    FLOAT operator-(FLOAT f)
    {
       FLOAT temp;
       temp.f =this->f-f.f;
       return temp;
    }
    FLOAT operator*(FLOAT f)
    {
       FLOAT temp;
       temp.f =this->f*f.f;
       return temp;
    }
    FLOAT operator/(FLOAT f)
    {
       FLOAT temp;
       temp.f =this->f/f.f;
       return temp;
    }
};
int main()
{
    FLOAT f1(5.2),f2(5.1);
    FLOAT f=f1+f2;
    f.display();

}

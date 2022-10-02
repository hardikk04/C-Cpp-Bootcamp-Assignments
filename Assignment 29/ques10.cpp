/* 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.

Example-
int main()

{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
} */
#include<iostream>
using namespace std;

class Rupee
{
private:
    float r;
public:
    Rupee(){}
    Rupee(float r)
    {
        this->r = r;
    }
    float getR()
    {
        return r;
    }
    void setData(float r)
    {
        this->r = r;
    }
    void display()
    {
        cout<<"Rupee is "<<r<<endl;
    }
   // operator Dollar()
    //{
     //   return r/81;
    //}
};
class Dollar
{
private:
    float d;
public:
    Dollar(){}
    Dollar(Rupee R)
    {
        d = R.getR()/81;
    }
    Dollar(float d)
    {
        this->d = d;
    }
    float getD()
    {
        return d;
    }
    void setData(float d)
    {
        this->d = d;
    }
    void display()
    {
        cout<<"Dollar is "<<d<<endl;
    }
    operator Rupee()
    {
        return d*81;
    }
};
int main()

{
    Rupee r = 1000;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}

/* 8. Create a base class called proof. Use this class to store two int type values that could
be used to prove that triangle is a right angled triangle. Create a class compute
which will determine whether a triangle is a right angled triangle. */
#include<iostream>
using namespace std;
class Proof
{
private:
    int b,h,p;
public:
    void setData(int b,int h,int p)
    {
        this->b=b;
        this->h=h;
        this->p=p;
    }
    int getB()
    {
        return b;
    }
    int getH()
    {
        return h;
    }int getP()
    {
        return p;
    }
};
class Compute:public Proof
{
public:
    void cal()
    {
        int temp;
        temp = getP()*getP();
        if(temp==(getB()*getB())+(getH()*getH()))
        {
            cout<<"Right angle triangle"<<endl;
        }
        else
            cout<<"Not"<<endl;
    }
};
int main()
{
    Compute c;
    c.setData(8,5,13);
    c.cal();
    return 0;
}

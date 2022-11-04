/* 4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading. */
#include<iostream>
using namespace std;
class Addition
{
private:
    int ia,ib,ic;
    double da,db,dc;
    float fa,fb,fc;
public:
    void setData(int ia,int ib,int ic)
    {
        this->ia=ia;
        this->ib=ib;
        this->ic=ic;
    }
    void setData(float fa,float fb,float fc)
    {
        this->fa=fa;
        this->fb=fb;
        this->fc=fc;
    }
    void setData(double da,double db,double dc)
    {
        this->da=da;
        this->db=db;
        this->dc=dc;
    }
    void display()
    {
        cout<<"The sum of Int is "<<ia+ib+ic<<endl;
        cout<<"The sum of Float is "<<fa+fb+fc<<endl;
        cout<<"The sum of Double is "<<da+db+dc<<endl;
    }
};
int main()
{
    Addition a;
    a.setData(1,2,3);
    a.setData(2.1f,3.2f,1.1f);
    a.setData(2.1,3.5,1.1);
    a.display();
}

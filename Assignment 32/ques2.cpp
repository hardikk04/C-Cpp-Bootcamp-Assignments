// 2. Define a class Rectangle and overload area function for different types of data type.
#include<iostream>
using namespace std;

class Rectangle
{
private:
    int il,ib,iarea;
    float fl,fb,farea;
    double dl,db,darea;
public:
    Rectangle(){}
    void area(int il,int ib)
    {
        this->il=il;
        this->ib=ib;
        iarea=ib*il;
    }
    void area(float fl,float fb)
    {
        this->fl=fl;
        this->fb=fb;
        farea=fb*fl;
    }
    void area(double dl,double db)
    {
        this->dl=dl;
        this->db=db;
        darea=db*dl;
    }
    void display()
    {
        cout<<"Area of Int "<<iarea<<endl;
        cout<<"Area of Float "<<farea<<endl;
        cout<<"Area of Double "<<darea<<endl;
    }
};
int main()
{
    Rectangle r;
    r.area(2,3);
    r.area(2.2f,3.2f);
    r.area(2.1,1.7);
    r.display();

}

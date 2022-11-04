/* 7. Create a base class called Matrix. Use this class to store 4 int type values that could
be used to calculate determinants and create matrices. Create class
calculate_determinant which will calculate the determinant of a matrix.
Using these classes, calculate the determinant of the matrix. */
#include<iostream>
using namespace std;
class Matrix
{
private:
    int a,b,c,d;
public:
    void SetMatrix()
    {
        cout<<"Enter the value of 2x2 Matrix"<<endl;
        cin>>a>>b>>c>>d;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }int getC()
    {
        return c;
    }int getD()
    {
        return d;
    }

};
class Calculate:public Matrix
{
    int der;
public:
    void calDeterminant()
    {
        int x,y;
        x= getA()*getD();
        y= getB()*getC();
        der= x-y;
        cout<<"Determinant is "<<der<<endl;
    }
};
int main()
{
    Calculate c;
    c.SetMatrix();
    c.calDeterminant();
}

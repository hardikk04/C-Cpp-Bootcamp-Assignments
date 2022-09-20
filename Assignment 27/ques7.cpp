/* 7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output- */
#include<iostream>
using namespace std;
class Fraction
{
private:
    int numerator=0;
    int denominator=0;
public:
    Fraction(){}
    Fraction(int n,int d)
    {
        numerator = n;
        denominator = n;
    }
    void setData()
    {
        int n, d;
        cout<<"Enter fraction value"<<endl;
        cout<<endl<<"Numerator  :";
        cin>>n;
        cout<<endl<<"Denominator  :";
        cin>>d;
        numerator = n;
        denominator = d;
    }
    void display()
    {
        cout<<"f++  :  "<<numerator<<"/"<<denominator<<endl;
        cout<<"++f  :  "<<numerator<<"/"<<denominator<<endl;
    }
    void showData()
    {
        cout<<"F1  :  "<<numerator<<"/"<<denominator<<endl;
        cout<<"F2   :  "<<numerator<<"/"<<denominator<<endl;
    }
    Fraction operator++(int useless)
    {
        Fraction temp;
        temp.numerator = numerator++;
        temp.denominator = denominator++;
        return temp;
    }
    Fraction operator++()
    {
        Fraction temp;
        temp.numerator = ++numerator;
        temp.denominator = ++denominator;
        return temp;
    }
    void operator=(Fraction t)
    {

        numerator = t.numerator;
        denominator = t.denominator;
    }
    friend ostream& operator<<(ostream &,Fraction);
    friend istream& operator>>(istream &,Fraction &);
};
ostream& operator<<(ostream &os,Fraction f)
{
    os<<"F1  :  "<<f.numerator<<"/"<<f.denominator<<endl;
    os<<"F2   :  "<<f.numerator<<"/"<<f.denominator<<endl;
    return os;
}
istream& operator>>(istream &c,Fraction &F)
{
    c>>F.numerator;
    c>>F.denominator;
    return c;
}
int main()
{
    Fraction f1,f2;
    f1.showData();
   cin>>f1;// f1.setData();
    cout<<++f1;
    f2 = (++f1);
    cout<<f2;


}

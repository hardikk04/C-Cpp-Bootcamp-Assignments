/* 5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 s1(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
return 0;
} */
#include<iostream>
using namespace std;
class Invent2
{
private:
    int a,b;
public:
    Invent2(){}
    Invent2(int a,int b)
    {
        this->a =a ;
        this->b =b ;
    }
    void display()
    {
        cout<<"For Invent 2"<<endl;
        cout<<"A="<<a<<" B="<<b<<endl;
    }
};
class Invent1
{
private:
    int a,b;
public:
    Invent1(){}
    Invent1(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    void setData(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout<<"A="<<a<<" B="<<b<<endl;
    }
    operator float()
    {
        float t;
        t = a+b;
        return t;
    }
    operator Invent2()
    {
        Invent2 temp(a,b);
        return temp;
    }
};
int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv=s1;
    cout<<tv<<endl;
    d1=(Invent2)s1;
    d1.display();
    return 0;
}

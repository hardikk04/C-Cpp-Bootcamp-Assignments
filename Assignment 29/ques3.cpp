/* 3. Create a Product class and convert Product type to Item type using constructor
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
return 0;
} */
#include<iostream>
using namespace std;

class Product
{
private:
    int a,b;
public:
    void setData(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout<<"A ="<<a<<" B="<<b<<endl;
    }
    Product(){}
    Product(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};
class Item
{
private:
    int i;
public:
    void display()
    {
        cout<<"Item ="<<i<<endl;
    }
    Item(){}
    Item(Product P)
    {
        i = P.getA() + P.getB();
    }
};
int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=p1;
    p1.display();
    i1.display();
    return 0;
}

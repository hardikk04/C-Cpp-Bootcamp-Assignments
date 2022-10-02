/* 4. Create Product class and convert Product type to Item type using casting operator
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
class Item
{
private:
    int i;
public:
    Item(){}
    Item(int i)
    {
        this->i = i;
    }
    void display()
    {
        cout<<"Item ="<<i<<endl;
    }
};
class Product
{
private:
    int a,b;
public:
    Product(){}
    Product(int a,int b)
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
        cout<<"A ="<<a<<" B="<<b<<endl;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    operator Item()
    {
        Item temp(a+b);
        return temp;
    }
};
int main()
{
    Item i1;
    Product p1;

    p1.setData(3,4);
    i1=(Item)p1;
    i1.display();
    return 0;
}

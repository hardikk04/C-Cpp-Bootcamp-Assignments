/* 3. Using the concept of pointers, write a function that swaps the private data values of
two objects of the same class type. */
#include<iostream>
using namespace std;
class Pointer
{
private:
    int a,b;
public:
    void setData()
    {
        cout<<"Enter the value of A and B"<<endl;
        cin>>a>>b;
    }
    void swap(Pointer *p)
    {
        Pointer temp;
        temp.a=this->a;
        temp.b=this->b;
        this->a=p->a;
        this->b=p->b;
        p->a=temp.a;
        p->b=temp.b;
    }
    void display()
    {
        cout<<"Value of A and B is "<<a<<" "<<b<<endl;
    }
};
int main()
{
    Pointer obj1,obj2;
    obj1.setData();
    obj2.setData();
    obj1.display();
    obj2.display();
    obj1.swap(&obj2);
    cout<<"After swap"<<endl<<endl;
    obj1.display();
    obj2.display();

}

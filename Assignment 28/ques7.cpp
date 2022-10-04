// 7. Create an Integer class and overload logical not operator for that class.
#include<iostream>
using namespace std;
class Interger
{
private:
    int num;
public:
    Interger(){}
    Interger(int n)
    {
        num = n;
    }
    void input(int n)
    {
        num = n;
    }
    void operator!()
    {
        num = !num;
    }

    void display()
    {
        cout<<"Number "<<num<<endl;
    }
};
int main()
{
    Interger i1(10),i2=i1;
    i1.display();
    !i2;
    i2.display();

}

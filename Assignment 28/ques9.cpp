/* 9. Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type. */
#include<iostream>
using namespace std;
class Interger
{
private:
    int x;
public:
    Interger(){}
    Interger(int n)
    {
        x = n;
    }
    void input(int n)
    {
        x = n;
    }
    void display()
    {
        cout<<"Number = "<<x<<endl;
    }
    operator int()
    {
        return x;
    }
};
int main()
{
    Interger i(5);
    int x;
    x = (int)i;
    i.display();
    cout<<endl<<"X is "<<x;
}

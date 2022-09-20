// 2. Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class Unary
{
    private:
        int distance,speed;
    public:
        Unary(){}
        Unary(int d,int s)
        {
            distance = d;
            speed = s;
        }
        void setData(int d,int s)
        {
            distance = d;
            speed = s;
        }
        void showData()
        {
            cout<<distance<<" and "<<speed<<endl;
        }
        void operator-()
        {
            distance=-distance;
            speed= -speed;
        }

};
int main()
{
    Unary u1(1,2);
    -u1;
    u1.showData();
}

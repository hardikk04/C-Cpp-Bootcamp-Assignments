/* 5. Consider following class Numbers
class Numbers

{
int x,y,z;
public:
// methods

};
Overload the operator unary minus (-) to negate the numbers. */
#include<iostream>
using namespace std;
class Numbers
{
private:
    int x,y,z;
public:
    Numbers(){}
    Numbers(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void setData(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void showData()
    {
        cout<<"X= "<<x<<" Y= "<<y<<" Z="<<z<<endl;
    }
   Numbers operator-()
   {
       Numbers temp;
       temp.x = -x;
       temp.y = -y;
       temp.z = -z;
       return temp;
   }

};
int main()
{
    Numbers N(-1,-2,4),n2;
    n2=-N;
    n2.showData();


}

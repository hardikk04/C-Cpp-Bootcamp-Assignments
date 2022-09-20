/* 8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor. */

#include<iostream>
using namespace std;
class Bank
{
    private:
        float principal,SI;
        int year;
        static float rate;
    public:
        Bank(){};
        Bank(float p,int y)
        {
            principal = p;
            year = y;
        }
        void cal()
        {
            SI = principal * year * rate / 100;
        }
        float getSI()
        {
            return SI;
        }
};
float Bank::rate=0.5;

int main()
{
    Bank b1(1000,1);
    b1.cal();
    cout<<"SI is "<<b1.getSI();
}

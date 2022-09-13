/* 5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class. */
#include<iostream>
using namespace std;

class ReverseNumber
{
    private:
        int num;
        int rev=0;
    public:
        void SetN(int n)
        {
            num=n;
        }
        int GetN()
        {
            return num;
        }
        int GetRev()
        {
            return rev;
        }
        void Reverse()
        {
            int remainder;
            while (num != 0)
            {
            remainder = num % 10;
            rev = rev * 10 + remainder;
            num /= 10;
            }
        }
};

int main()
{
    ReverseNumber r1;
    r1.SetN(123);
    r1.Reverse();
    cout<<"Reverse is "<<r1.GetRev();
}

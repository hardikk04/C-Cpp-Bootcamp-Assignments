/* 3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class. */
#include<iostream>
using namespace std;

class Factorial
{
    private:
        int fact,num;

    public:
        void setN(int n)
        {
            num=n;
        }

        int getN()
        {
            return num;
        }

        int getFact()
        {
            return fact;
        }

        void cal()
        {
        int f=1,i;
        if(num<=0)
        {
            fact = 1;
            return;
        }
        for(i=1;i<=num;i++)
        {
            f = f * i;
        }
        fact = f;

    }
};

int main()
{
    Factorial f1,f2;
    f1.setN(5);
    f1.cal();
        cout<<"Factorial of "<<f1.getN()<<" is "<<f1.getFact();
}

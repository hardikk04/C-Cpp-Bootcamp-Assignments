/* 7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes. */

#include<iostream>
using namespace std;

class Greatest
{
    private:

        int a,b,c,great;

    public:

        void Setdata(int x,int y,int z)
        {
                a=x;
                b=y;
                c=z;
        }

        int GetGreat()
        {
            return great;
        }

        void cal()
        {
            great=a>b? (a>c?a:c) : (c>b?c:b);
        }

};

int main()
{
    Greatest g1,g2;
    g1.Setdata(2,3,4);
    g1.cal();
    cout<<"Greatest in G1 is "<<g1.GetGreat()<<endl;

    g2.Setdata(3,9,4);
    g2.cal();
    cout<<"Greatest in G2 is "<<g2.GetGreat()<<endl;

    return 0;
}

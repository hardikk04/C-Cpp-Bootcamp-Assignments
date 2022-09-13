/* 6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called. */
#include<iostream>
using namespace std;
class Square
{
    private:
    int num,square;
    static int count;
    public:
        void setN(int n)
        {
            count++;
            num=n;
        }
        int getN()
        {
            count++;
            return num;
        }
        int getSquare()
        {

            return square;
        }
        void cal()
        {
            count++;
            square=num*num;
        }
        int GetCount()
        {
            count++;
            return count;
        }


};
int Square::count=0;
int main()
{
    Square s1;
    s1.setN(5);
    s1.cal();
    cout<<"Square is "<<s1.getSquare()<<" Function call "<<s1.GetCount();
}

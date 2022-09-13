/* 4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class. */
#include<iostream>
using namespace std;

class LargestNumber
{
        private:
        int a,b,c,largest;

        public:
            void set(int x, int y, int z)
            {
                a=x;
                b=y;
                c=z;
            }
            void CheckLargest()
            {
                int lar=1;
                lar = a > b ? (a > c ? a : c) : (b > c ? b : c);
                largest = lar;
            }
            int getLargest()
            {
                return largest;
            }

};

int main()
{
    LargestNumber l1;
    l1.set(20,9,21);
    l1.CheckLargest();
    cout<<"Largest is "<<l1.getLargest();

}

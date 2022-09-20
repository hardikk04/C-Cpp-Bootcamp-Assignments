// 4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class Counter
{
    private:
        static int count;
    public:
        Counter()
        {
            count++;
        }
        void showCount()

        {
            cout<<"Counter is "<<count<<endl;
        }

};
int Counter::count=0;
int main()
{
    Counter c1,c2;
    c1.showCount();
    c2.showCount();
}

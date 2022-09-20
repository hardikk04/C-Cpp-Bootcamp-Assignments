/* 10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result. */

#include<iostream>
using namespace std;

class StaticCount
{
    private:
        int result=0;
        static int count;
    public:
        int getResult()
        {
            return result;
        }
        StaticCount()
        {
        count++;
        result = count;
        cout<<"Total Object is "<<result<<endl;
        };
};
int StaticCount::count=0;
int main()
{
    StaticCount s1,s2,s3;
}

// 1. Create an ADT array without using STL.
#include<iostream>
using namespace std;
class Array
{
private:
    int arr[100];
public:
    ~Array()
    {
        delete []arr;
    }

};
int main()
{
    Array a;

    return 0;
}

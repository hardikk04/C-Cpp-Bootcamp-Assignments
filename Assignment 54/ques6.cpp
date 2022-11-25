// 6. Create a Dynamic array without using STL.
#include<iostream>
using namespace std;
class dynamic_array
{
private:
    int *Array,Size,Capacity;
public:
    dynamic_array()
    {
        Array = new int[1];
        Size=0;
        Capacity=1;

    }
    ~dynamic_array()
    {
        delete Array;
        Size=0;
        Capacity=0;

    }
};
int main()
{
    dynamic_array a;

    return 0;
}

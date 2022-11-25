// 7. Create a function in a dynamic array to return the size of the array.
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
    int getSize()
    {
        return Size;
    }

};
int main()
{
    dynamic_array a;
    cout<<a.getSize();

    return 0;
}

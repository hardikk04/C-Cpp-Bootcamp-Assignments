// 6. Using STL to check whether an array is empty or not.
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5>ar={1,1,1,2,3};
    if(ar.empty())
    {
        cout<<"Array is empty"<<endl;
    }
    else
    {
        cout<<"Array is not empty"<<endl;
    }
    return 0;
}

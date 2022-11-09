// 5. Input and add elements to a list C++ STL
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int>l;
    for(int i=0;i<5;i++)
    {
        l.push_back(i*100);
    }
}

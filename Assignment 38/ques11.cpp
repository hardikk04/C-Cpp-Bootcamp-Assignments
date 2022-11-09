// 11. Creating a list by assigning the all elements of another list C++ STL
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list <int>l{11,22,33,44,11};
    list <int>l2=l;
    list <int>::iterator x;

    for(x=l2.begin();x!=l2.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}

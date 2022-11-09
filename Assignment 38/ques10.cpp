// 10. Merge two lists C++ STL
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list <int>l{11,22,33,44,11},l2={1,2,3,4,5};
    list <int>::iterator x;
    l.merge(l2);
    for(x=l.begin();x!=l.end();x++)
    {
        cout<<*x<<" ";
    }


    return 0;
}

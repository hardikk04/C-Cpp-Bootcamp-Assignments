/* 8. Remove all occurrences of an element and remove set of some specific from the list
C++ STL */
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list <int>l{11,22,33,44,11};
    list <int>::iterator x;

    l.remove(11);
    for(x = l.begin();x!= l.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}

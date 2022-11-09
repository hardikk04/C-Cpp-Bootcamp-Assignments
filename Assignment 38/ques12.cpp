// 12. Assign a list with array elements C++ STL
#include<iostream>
#include<list>
#include<iterator>
#include<array>
using namespace std;
int main()
{
    list <int>l;
    int ar[]={1,2,3,4,5};
    list <int>::iterator x;
    l.assign(ar+0,ar+5);
    for(x=l.begin();x!=l.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}

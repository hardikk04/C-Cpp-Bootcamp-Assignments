// 7. Insert the element at beginning and end of the list | C++ STL
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list <int>l;
    list <int>::iterator x;
    for(int i=0;i<5;i++)
    {
        l.push_back(i*100);
    }
    l.push_front(50);
    l.push_back(60);
    for(x = l.begin();x!= l.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}

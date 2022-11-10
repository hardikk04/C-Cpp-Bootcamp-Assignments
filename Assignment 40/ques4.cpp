/* 4. Returns a constant iterator pointing to the first element of the container, that is, the
iterator cannot be used to modify, only traverse the deque. */
#include<iostream>
#include<iterator>
#include<deque>
using namespace std;
int main()
{
    deque <int>d;
    deque <int>::const_iterator x;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    x = d.begin();
    cout<<*x;
    return 0;
}

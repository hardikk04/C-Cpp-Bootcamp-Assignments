// 8. Remove elements from a container from the specified position or range in deque.
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque <int>d;
    deque <int>::iterator x;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    x= d.begin();
    d.erase(x);
    for(x=d.begin();x!=d.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}

// 6. Assign values to the same or different deque container.
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque <int>d1,d2;
    deque <int>::iterator x;
    d1.assign(5,10);
    d2=d1;
    for(x = d2.begin();x!=d2.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}

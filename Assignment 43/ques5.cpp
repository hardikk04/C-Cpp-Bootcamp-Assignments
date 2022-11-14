/* 5. Write a c++ program, to show that priority_queue is by default a Max Heap.
Note:
If elements are printed in descending order, then we have a max heap. */
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>p;
    p.push(22);
    p.push(52);
    p.push(42);
    p.push(36);
    p.push(76);

    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }

    return 0;
}

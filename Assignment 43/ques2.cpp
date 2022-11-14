/* 2. Implement different operations on priority queue .i.e. adding element, removing
element, size of priority queue, and print it. */
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>p;
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);

    cout<<p.size()<<endl;

        p.pop();
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}

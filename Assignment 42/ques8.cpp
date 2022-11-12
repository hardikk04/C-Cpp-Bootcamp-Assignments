/* 8. Insert a new element into the queue container, the new element is added to the end
of the queue */
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    q.push(5);
        cout<<q.back()<<" ";
    return 0;
}

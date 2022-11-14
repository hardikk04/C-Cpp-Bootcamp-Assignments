// 6. Write a c++ program, to use priority_queue to implement min heap.
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>p;
    p.push(34);
    p.push(74);
    p.push(87);
    p.push(53);
    p.push(78);

    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}

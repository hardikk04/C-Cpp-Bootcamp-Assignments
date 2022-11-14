// 3. Write a c++ program, to demonstrate priority queue having a min element at top.
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>p;
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);

    cout<<p.top();
    return 0;
}

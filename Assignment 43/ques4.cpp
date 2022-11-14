// 4. Write a c++ program, to swap the elements of two priority queues of int type.
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>p1,p2,temp;
    p1.push(1);
    p1.push(1);
    p1.push(1);
    p2.push(2);
    p2.push(2);
    p2.push(2);

    p1.swap(p2);

    cout<<"P1 elements"<<endl;
    while(!p1.empty())
    {
        cout<<p1.top()<<" ";
        p1.pop();
    }
    cout<<endl;
    cout<<"P2 elements"<<endl;
    while(!p2.empty())
    {
        cout<<p2.top()<<" ";
        p2.pop();
    }
    return 0;
}

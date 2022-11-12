/* 7. Exchange the contents of two queues but the queues must be of the same data type,
although sizes may differ. */
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue <int>q1,q2,temp;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q2.push(4);
    q2.push(5);
    q2.push(6);

    temp=q1;
    q1=q2;
    q2=temp;

    cout<<"Queue 1"<<endl;
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    cout<<"Queue 2"<<endl;
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }

    return 0;
}

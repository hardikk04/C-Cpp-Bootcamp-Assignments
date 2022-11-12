/* 6. In C++ STL, Queue is a type of container that follows FIFO (First-in-First-Out)
elements arrangement i.e. the elements which insert first will be removed first. In the
queue, elements are inserted at one end known as "back" and are deleted from
another end known as "front".empty() and size() function of the queue with the
Example. */
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    if(q.empty())
    {
        cout<<"Empty and the size of Queue is "<<q.size()<<endl;
    }
    else
    {
        cout<<"Not Empty and the size of Queue is "<<q.size()<<endl;
    }

    return 0;
}

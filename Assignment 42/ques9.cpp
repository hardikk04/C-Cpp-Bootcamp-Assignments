// 9. Adds the element ‘g’ at the end of the queue.
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<char>q;
    q.push('a');
    q.push('b');
    q.push('c');
    q.push('d');
    q.push('e');

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    q.push('g');
    cout<<q.back();
    return 0;

}



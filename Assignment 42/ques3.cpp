// 3. Check if a queue is empty or not using queue::size() function
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue <int>q;
    q.push(1);
    q.push(2);
    q.push(3);

    if(q.size())
    {
        cout<<"Not empty"<<endl;
    }
    else
    {
        cout<<"Empty"<<endl;
    }
    return 0;
}

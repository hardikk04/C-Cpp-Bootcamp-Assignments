// 2. Create a railways ticket counter and allot ticket to first come first take using c++ STL
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    cout<<"Enter you ticket number"<<endl;
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        q.push(k);
    }
    cout<<"Line entry"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

// 5. Schedule a interview by using applicant's reaching time using c++ STL
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    cout<<"Enter your reached time"<<endl;
    for(int i=0;i<5;i++)
    {
        int l;
        cin>>l;
        q.push(l);
    }

    int i=1;
    while(!q.empty())
    {
        cout<<"Interview time of "<<i<<" Student at "<<q.front()<<endl;
        q.pop();
        i++;
    }
    return 0;
}

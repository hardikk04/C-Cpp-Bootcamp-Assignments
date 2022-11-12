// 4. Manage a queue for multiple input and store in ascending order of his first character
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    priority_queue<string,vector<string>,greater<string>>q;
    string str;
    cout<<"Enter Names"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>str;
        q.push(str);
    }

    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }

    return 0;
}

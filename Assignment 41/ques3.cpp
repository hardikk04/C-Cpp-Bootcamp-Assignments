/* 3. Create a stack, and implement main operations like push(), pop(), peek(), empty()
and size(). */
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int>s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout<<"Size of stack is "<<s.size()<<endl;
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
    cout<<"Size of stack is "<<s.size();
    return 0;
}

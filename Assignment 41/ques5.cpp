/* 5. Create stack1 of int type, and create another stack of the same type with name
stack2 and copy all the elements of stack1 into stack2 in the same order. */
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int>s1,s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s2=s1;
    while(!s2.empty())
    {
        cout<<s2.top();
        s2.pop();
    }
    return 0;
}

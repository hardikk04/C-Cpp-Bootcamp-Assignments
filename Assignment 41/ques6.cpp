/* 6. Reverse a string using a stack.
Example:
Input: str = "Reverse me"
Output: em esreveR */
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    string str={"Reverse me"};

    string temp;
    for(int i=0;i<str.size();i++)
    {
        temp = str[i];
        s.push(temp);
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    return 0;
}

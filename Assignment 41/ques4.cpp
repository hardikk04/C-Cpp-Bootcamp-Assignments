/* 4. Reverse the Words of a String using Stack.
Example:
Input: str = “I Love To Code”
Output: Code To Love I */
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<string>s;
    string str={"I Love To Code"};

    string temp="";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ')
        {
        s.push(temp);
        temp="";
        }
        else
        {
        temp = temp+str[i];
        }
    }
        s.push(temp);
    while(!s.empty())
    {
        temp=s.top();
        cout<<temp<<" ";
        s.pop();
    }
    return 0;
}

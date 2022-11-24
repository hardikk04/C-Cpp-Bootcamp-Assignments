/* 2. Write a C++ program to delete all copies from an unordered_multiset.
Example:
Input - 6 4 2 7 3 3 1 1 1
Output - 6 4 2 7 3 1 */
#include<bits/stdc++.h>
using namespace std;

void copies(unordered_multiset<int>m)
{
    unordered_set<int>s;
    unordered_multiset<int>::iterator x=m.begin();
    unordered_multiset<int>m2;

    cout<<"Unordered Multiset"<<endl;
    for(x;x!=m.end();x++)
    {
        cout<<*x<<" ";
        int temp=*x;
        s.insert(temp);
    }
    cout<<endl;
    unordered_set<int>::iterator xs;
    for(xs=s.begin();xs!=s.end();xs++)
    {
        int temp=*xs;
        m2.insert(temp);
    }
    cout<<endl;
    cout<<"Unordered Multiset after delete"<<endl;
    for(x=m2.begin();x!=m2.end();x++)
    {
        cout<<*x<<" ";
    }

}
int main()
{
    unordered_multiset<int>m;

    m.insert(6);
    m.insert(4);
    m.insert(2);
    m.insert(7);
    m.insert(3);
    m.insert(3);
    m.insert(1);
    m.insert(1);
    m.insert(1);

    copies(m);
}

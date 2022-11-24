// 1. Write a C++ program to initialise the unordered_multiset and print it on the screen.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int>m;
    m.insert(5);
    m.insert(2);
    m.insert(6);

    unordered_multiset<int>::iterator x;

    for(x=m.begin();x!=m.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}

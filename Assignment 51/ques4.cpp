/* 4. Write a C++ program to illustrate the swapping of data between two
unordered_multiset. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int>m1,m2;

    m1.insert(1);
    m1.insert(2);
    m1.insert(3);

    m2.insert(7);
    m2.insert(6);
    m2.insert(5);

    m1.swap(m2);

    unordered_multiset<int>::iterator x;

    for(x=m1.begin();x!=m1.end();x++)
    {
        cout<<*x<<" ";
    }

    cout<<endl;

    for(x=m2.begin();x!=m2.end();x++)
    {
        cout<<*x<<" ";
    }
}

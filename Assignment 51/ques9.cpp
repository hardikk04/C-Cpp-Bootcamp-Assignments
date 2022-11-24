// 9. Write a C++ program to illustrate the load_factor() function in unordered_multiset.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int>m;

    m.insert(1);
    m.insert(2);
    m.insert(3);
    m.insert(4);
    m.insert(5);

    cout<<"Load factor is "<<m.load_factor()<<endl;

    return 0;
}


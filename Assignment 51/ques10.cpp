// 10. Write a C++ program to illustrate the reverse() function in unordered_multiset.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int>m;
    m.insert(1);
    m.insert(2);
    m.insert(3);
    m.insert(4);

    m.reserve(5);

    return 0;
}

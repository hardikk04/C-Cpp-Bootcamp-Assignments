/* 4. Create a c++ program using multiset and returns the maximum number of elements
that the multiset can hold �> O(1) */
#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int>m;
    cout<<m.max_size();
    return 0;
}

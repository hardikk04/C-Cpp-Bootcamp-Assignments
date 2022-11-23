/* 6. Create a c++ program using multiset and inserts the element x in the multiset –>
O(log n) */
#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int>m;

    for(int x=0;x<5;i=x*2)
    {
        int k;
        cin>>k;
        m.insert(k);
    }
    return 0;
}

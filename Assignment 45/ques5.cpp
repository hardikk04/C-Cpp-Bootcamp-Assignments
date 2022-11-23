/* 5. Create a c++ program using multiset and returns whether the multiset is empty –>
O(1) */
#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int>m;
    m.insert(5);

    if(m.empty())
    {
       cout<<"Multiset is empty";
    }
    else
    {
        cout<<"Multiset is not empty";
    }
    return 0;
}

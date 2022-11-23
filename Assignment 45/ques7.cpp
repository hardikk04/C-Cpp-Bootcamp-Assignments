/* 7. Create a c++ program using multiset and removes all the elements from the multiset
–> O(n) */
#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int>m;

    m.insert(1);
    m.insert(2);
    m.insert(3);

    m.clear();

    multiset<int>::iterator x=m.begin();

    for(x=m.begin();x!=m.end();x++)
    {
    cout<<*x;
    }


    return 0;

}

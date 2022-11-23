/* 8. Create a c++ program using multiset and removes all the occurrences of x –> O(log
n) */
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<int>m;

    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        m.insert(k);
    }
    multiset<int>::iterator x=m.begin();
    set<int>s;
    for(x=m.begin();x!=m.end();x++)
    {
        s.insert(*x);
    }

    set<int>::iterator n;
    for(n=s.begin();n!=s.end();n++)
    {
        cout<<*n<<" ";
    }

    return 0;
}

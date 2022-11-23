/* 9. Create a c++ program using multiset and remove only one instance of element from
multiset having same value */
#include<iostream>
#include<unordered_set>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<int>m;
    cout<<"Enter the values";
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        m.insert(k);
    }

    unordered_set<int>s;
    unordered_set<int>::iterator xs;
    multiset<int>::iterator x=m.begin();

    for(x;x!=m.end();x++)
    {
        s.insert(*x);
    }

    for(xs= s.begin();xs!=s.end();xs++)
    {
        cout<<*xs<<" ";
    }


}

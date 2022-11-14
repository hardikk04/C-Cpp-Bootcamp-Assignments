// 3. Erase an element from a set.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int>s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(6);

    set<int>::iterator x;
    x=s.begin();

    s.erase(x);

    for(x=s.begin();x!=s.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}

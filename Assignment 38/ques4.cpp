// 4. Iterate a list in reverse order C++ STL
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list <int>l;
    list <int>::iterator x;
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        l.push_back(k);
    }
    l.reverse();
    for(x = l.begin();x!=l.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}

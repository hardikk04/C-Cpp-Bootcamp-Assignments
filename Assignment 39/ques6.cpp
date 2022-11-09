// 6. Create two forward lists of int type, and merge them.
#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list <int>l1,l2;
    forward_list <int>::iterator x;
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        l1.push_front(k);
    }
    for(int i=0;i<6;i++)
    {
        int k;
        cin>>k;
        l2.push_front(k);
    }
    l1.merge(l2);
    for(x=l1.begin();x!=l1.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}

// 9. Write a C++ code to demonstrate working of splice_after() in forward list.
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
    for(int i=0;i<2;i++)
    {
        int k;
        cin>>k;
        l2.push_front(k);
    }
    l2.splice_after(l2.begin(),l1,l1.begin(),l1.end());
    for(x=l2.begin();x!=l2.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}

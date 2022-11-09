/* 7. Below are two forward lists, first sort them and then merge them.
forwardlist1={3,2,9}
forwardlist2={8,1,2} */
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
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        l2.push_front(k);
    }
    l1.sort();
    l2.sort();
    l1.merge(l2);
    for(x=l1.begin();x!=l1.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}

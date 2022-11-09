// 5. Write a program remove all consecutive duplicate elements from the forward list
#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list <int>l;
    forward_list <int>::iterator x;
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        l.push_front(k);
    }
    for(x=l.begin();x!=l.end();x++)
    {
               l.erase_after(x);
    }
    for(x=l.begin();x!=l.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}


// 10. Write a program to assign values in forward_list using the values of another list
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

    for(x=l1.begin();x!=l1.end();x++)
    {
        l2.push_front(*x);
    }
    for(x=l2.begin();x!=l2.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}

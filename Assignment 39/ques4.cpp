// 4. Write a program to reverse forward list elements.
#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list <int>l={1,2,4,5,6};
    forward_list <int>::iterator x;
    l.reverse();
    for(x=l.begin();x!=l.end();x++)
    {
        cout<<*x<<" ";
    }
    return 0;
}

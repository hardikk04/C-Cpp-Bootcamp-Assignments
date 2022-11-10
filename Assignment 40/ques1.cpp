/* 1. Inserts an element. And returns an iterator that points to the first of the newly inserted
elements. */
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque <int>d;
    deque <int>::iterator x;
    d.push_front(5);
    x=d.begin();
    cout<<*x;
    return 0;
}

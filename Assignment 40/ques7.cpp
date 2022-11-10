// 7. Return a first element and last element of the deque container.
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque<int>d;
    deque<int>::iterator x;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    cout<<"First element of Deque is "<<d.front()<<endl;
    cout<<"Last element of Deque is "<<d.back()<<endl;
    return 0;

}

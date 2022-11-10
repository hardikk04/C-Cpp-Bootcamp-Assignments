/* 3. Returns a reverse iterator which points to the position before the beginning of the
deque (which is considered its reverse end). */
#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
int main()
{
    deque <int>d;
    deque <int>::reverse_iterator x;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    x=d.rbegin();
    x++;
    cout<<*x;
    return 0;
}

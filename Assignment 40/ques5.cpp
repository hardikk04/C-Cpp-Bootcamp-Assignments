// 5. Returns the maximum number of elements that a deque container can hold.
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque <int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    cout<<d.max_size()<<endl;
    cout<<d.size();
    return 0;
}

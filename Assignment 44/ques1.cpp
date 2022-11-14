// 1. Find the total number of elements of the set container.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int>s;
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(2);

    cout<<s.size();

    return 0;
}

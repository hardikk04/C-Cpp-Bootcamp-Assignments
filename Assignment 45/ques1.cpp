/* 1. Create a c++ program using multiset and returns an iterator to the first element in
the multiset –> O(1) */
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<int>m;
    m.insert(1);
    m.insert(3);
    m.insert(2);

    multiset<int>::iterator x=m.begin();

    cout<<"First element is "<<*x<<endl;

    return 0;
}

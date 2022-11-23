/* 2. Create a c++ program using multiset and returns an iterator to the theoretical
element that follows the last element in the multiset –> O(1) */

#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<int>m;
    multiset<int>::iterator x;

    m.insert(1);
    m.insert(4);
    m.insert(2);
    m.insert(5);
    m.insert(6);

    x=m.end();

    cout<<"Last element is "<<*x<<endl;

    return 0;

}

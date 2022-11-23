/* 3. Create a c++ program using multiset and returns the number of elements in the
multiset –> O(1) */
#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int>m;

    m.insert(5);
    m.insert(6);
    m.insert(7);

    cout<<"The number of elements are "<<m.size();

    return 0;
}

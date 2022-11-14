// 7. how to find the upper bound of any desired element from the set.
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(50);
    s.insert(40);

    cout<<"Upper bound of 30 is "<<*(s.upper_bound(30));

    return 0;
}

// 6. How to find the lower bound of any desired element from the set.
#include<iostream>
#include<iterator>
#include<set>

using namespace std;
int main()
{
    set<int>s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);


    cout<<"Lower bound of 30 is "<<*(s.lower_bound(30));

    return 0;
}

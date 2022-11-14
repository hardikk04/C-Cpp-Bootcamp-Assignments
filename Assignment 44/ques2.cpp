// 2. Using inbuilt function and insert an element to the set container.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int>s;
    s.insert(23);
    s.insert(2);
    s.insert(54);
    s.insert(4);
    s.insert(1);

    return 0;
}

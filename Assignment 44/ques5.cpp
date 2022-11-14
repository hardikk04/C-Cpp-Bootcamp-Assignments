// 5. Make a c++ program to insert unique element in set
#include<iostream>
#include<iterator>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(2);

    set<int>::iterator x=s.begin();

    for(x;x!=s.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}

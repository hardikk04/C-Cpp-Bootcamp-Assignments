// 4. Checks whether the set is empty or not.if it is empty insert 5 elements in the set
#include<iostream>
#include<iterator>
#include<set>
using namespace std;
int main()
{
    set<int>s;

    if(s.empty())
    {
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(7);
    s.insert(4);
    s.insert(6);
    }
    else
    {
        cout<<"Not empty"<<endl;
    }

    set<int>::iterator x=s.begin();

    for(x;x!=s.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}

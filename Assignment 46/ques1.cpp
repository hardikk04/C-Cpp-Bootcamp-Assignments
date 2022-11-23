// 1. Create a map, insert at least 5 pairs of keys and values and print it.
#include<map>
#include<iostream>
#include<iterator>
using namespace std;
int main()
{
    map<int,int>m;

    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(5,50));

    map<int,int>::iterator x;

    for(x=m.begin(); x!= m.end();x++)
    {
        cout<<"Key "<<x->first<<" Value "<<x->second<<endl;
    }

    return 0;
}

/* 2. Declare a multimap m1 of key-value pairs of integer type and then insert some pair
type data. Now print the multimap values of m1, and also create another multimap
m2 of the same type as m1 using m1.begin() and m1.end() as parameters. */
#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
    multimap<int,int>m1,m2;

    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(1,20));
    m1.insert(pair<int,int>(2,30));
    m1.insert(pair<int,int>(3,30));
    m1.insert(pair<int,int>(4,40));

    multimap<int,int>::iterator x=m1.begin();

    cout<<"M1"<<endl;
    for(x;x!=m1.end();x++)
    {
        cout<<"Key "<<x->first<<" Second "<<x->second<<endl;
        m2.insert(pair<int,int>(x->first,x->second));
    }

    cout<<"M2"<<endl;
    x=m2.begin();
    for(x;x!=m2.end();x++)
    {
        cout<<"Key "<<x->first<<" Second "<<x->second<<endl;
    }

    return 0;
}

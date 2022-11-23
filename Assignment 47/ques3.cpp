// 3. Write a c++ code for illustration of multimap::swap() function.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int,int>m1,m2;

    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(1,20));
    m1.insert(pair<int,int>(2,30));

    m2.insert(pair<int,int>(5,50));
    m2.insert(pair<int,int>(6,60));
    m2.insert(pair<int,int>(7,70));

    m1.swap(m2);

    multimap<int,int>::iterator x=m1.begin();

    for(x;x!=m1.end();x++)
    {
        cout<<"Key "<<x->first<<" Value "<<x->second<<endl;
    }
    cout<<endl;
    x=m2.begin();
    for(x;x!=m2.end();x++)
    {
        cout<<"Key "<<x->first<<" Value "<<x->second<<endl;
    }
}

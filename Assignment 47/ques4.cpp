// 4. Write a program to erase all the entries of the key.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(1,20));
    m.insert(pair<int,int>(2,30));

    multimap<int,int>::iterator x=m.begin();

    m.erase(1);

    for(x=m.begin();x!=m.end();x++)
    {
        cout<<"Key "<<x->first<<" Second "<<x->second<<endl;
    }


}

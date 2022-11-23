// 5. Write a program to erase only a single value based on position.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(1,20));
    m.insert(pair<int,int>(2,30));

    multimap<int,int>::iterator x=m.begin();

    int temp = x->first;
    m.erase(temp);

    for(x=m.begin();x!=m.end();x++)
    {
        cout<<"Key "<<x->first<<" Second "<<x->second<<endl;
    }


}

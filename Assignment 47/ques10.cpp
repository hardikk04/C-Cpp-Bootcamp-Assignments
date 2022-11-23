// 10. Write a program that checks whether a given multimap is empty or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int>m;

    if(m.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }

    return 0;
}

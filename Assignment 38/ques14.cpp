// 14. Access elements of a characters list using const_iterator in C++ STL
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list <char>l;
    list <char>::const_iterator x;
    for(int i =0;i<5;i++)
    {
        char a;
        cin>>a;
        l.push_back(a);
    }
    for(x=l.begin();x!=l.end();x++)
    {
        cout<<*x<<" ";
    }
 return 0;
}

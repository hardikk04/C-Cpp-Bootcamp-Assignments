// 13. Push characters in a list and print them separated by space in C++ STL
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list <int>l;
    list <int>::iterator x;
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        l.push_back(k);
    }
    for(x = l.begin();x!=l.end();x++)
    {
        cout<<*x<<" ";
    }

    return 0;
}

// 6. Get the first and last element of the list C++ STL
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
    cout<<l.front()<<endl;
    cout<<l.back();
    return 0;
}

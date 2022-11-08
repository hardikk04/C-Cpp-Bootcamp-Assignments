// 7.Sort an array in ascending order using sort() function in C++ STL
#include<iostream>
#include <bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
    array <int,5>ar;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<ar.size();i++)
    {
        cin>>ar.at(i);
    }
    for(int i=0;i<ar.size();i++)
    {
        cout<<ar.at(i)<<" ";
    }
    return 0;
}

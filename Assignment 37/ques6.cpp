// 6. Write a program to reverse vector elements
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int>v={1,2,3,4,5};
    reverse(v.begin(), v.end());
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i];
    }

}

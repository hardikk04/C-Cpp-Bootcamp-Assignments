/* 2. Returns a reverse iterator which points to the last element of the deque (i.e., its
reverse beginning). */
#include<iostream>
#include<vector>
#include<deque>
#include<iterator>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque <int>d;
    deque <int>::reverse_iterator x;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    x = d.rbegin();

    cout<<*x;
    return 0;
}

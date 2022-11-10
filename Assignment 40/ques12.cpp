/* 12. Given a string S containing letters and ‘#‘. The ‘#” represents a backspace. The task
is to print the new string without ‘#‘. */
#include<iostream>
#include<string>
#include <bits/stdc++.h>
#include<deque>
#include<iterator>
using namespace std;
deque<char> check(string);
int main()
{

    string s;
    cout<<"Enter the string"<<endl;
    cin.ignore();
    getline(cin,s);

    deque<char>d=check(s);
    cout<<d.front();

    return 0;
}
deque<char> check(string s)
{
    deque <char>d;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='#');
        {
            d.push_back(s[i]);
        }
    }

    return d;
}

// 9. Converting String into Set in C++ STL
#include<iostream>
#include<iterator>
#include<set>
#include<string>
using namespace std;
int main()
{
    string str{"abcdefghijklmnopqrstuvwxyz"};
    set<char>s;

    cout<<"String is "<<str<<endl;
    for(int i=0;i<str.size();i++)
    {
        s.insert(str[i]);
    }
    cout<<endl;

    set<char>::iterator x;
    cout<<"Set is ";
    for(x=s.begin();x!=s.end();x++)
    {
        cout<<*x;
    }

    return 0;
}

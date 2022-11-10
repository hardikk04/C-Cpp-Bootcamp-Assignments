// 10. Check if given Strings can be made equal by inserting at most 1 String using deque.
#include<iostream>
#include<deque>
#include<iterator>
#include<string>
using namespace std;
int main()
{
    deque <string>d;
    cout<<"Enter first string"<<endl;
    string s;
    cin.ignore();
    getline(cin,s);
    d.push_back(s);
    cout<<"Enter second string"<<endl;
    cin.ignore();
    getline(cin,s);
    d.push_back(s);

    if(d.front()==d.back())
    {
        cout<<"String are equal"<<endl;
    }
    else
    {
        cout<<"Not equal";
    }
    return 0;
}

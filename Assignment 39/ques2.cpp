/* 2. Write a c++ code, in which create a forward list and assign values to it at the time of
initialization and print it on the console screen. */
#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list <int>l={1,2,4,5,6};
    forward_list <int>::iterator x;
    for(x=l.begin();x!=l.end();x++)
    {
        cout<<*x;
    }
}

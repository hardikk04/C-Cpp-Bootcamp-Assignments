// 3. Create a forward list insert elements from 1 to 10 and find the sum of elements.
#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list <int>l={1,2,4,5,6};
    forward_list <int>::iterator x;
    int temp=0;
    for(x=l.begin();x!=l.end();x++)
    {
        temp = temp + *x;
    }
    cout<<temp;
    return 0;
}

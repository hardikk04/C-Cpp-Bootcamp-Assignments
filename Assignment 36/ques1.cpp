// 1. Using STL Array gets and sets a reference to an element based on a given index.
#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{
    array <int,10>ar;
    cout<<"Enter the "<<ar.size()<<" values of array"<<endl;
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

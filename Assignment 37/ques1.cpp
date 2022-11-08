// 1. Declare a vector with Initialization and print the elements.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v={1,2,3,4,5};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    cout<<"Size of Vector is "<<v.size()<<endl;
    cout<<"Size of Vector Capacity is "<<v.capacity()<<endl;
    return 0;
}

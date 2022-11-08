/* 5. C++ STL program to demonstrate example of array::rbegin() and array::rend()
functions */
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5>ar;
    cout<<"Enter the value of "<<ar.size()<<" this size"<<endl;
    for(int i=0;i<ar.size();i++)
    {
        cin>>ar.at(i);
    }
    cout<<"Showing the normal array"<<endl;
    for(int i=0;i<ar.size();i++)
    {
        cout<<ar.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Print the last element "<<*ar.rbegin()<<endl;
    cout<<"After using of rbegin() Function"<<endl;
    for(auto i=ar.rbegin();i!=ar.rend();i++)
    {
        cout<<*i<<" ";
    }
    return 0;

}

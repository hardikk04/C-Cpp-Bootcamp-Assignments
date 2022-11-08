//8. Sort an array in descending order using sort() function in C++ STL
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5>ar1,ar2;
    cout<<"Enter the array 1 elements"<<endl;
    for(int i=0;i<ar1.size();i++)
    {
        cin>>ar1.at(i);
    }
    cout<<"Enter the array 2 elements"<<endl;
    for(int i=0;i<ar1.size();i++)
    {
        cin>>ar2.at(i);
    }
    cout<<"Showing the arrays without swap"<<endl;
    cout<<"Array 1"<<endl;
    for(int i=0;i<ar1.size();i++)
    {
        cout<<ar1.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Array 2"<<endl;
    for(int i=0;i<ar1.size();i++)
    {
        cout<<ar2.at(i)<<" ";
    }
    ar1.swap(ar2);
    cout<<endl;
    cout<<"After swap"<<endl;
    cout<<"Array 1"<<endl;
    for(int i=0;i<ar1.size();i++)
    {
        cout<<ar1.at(i)<<" ";
    }
    cout<<endl;
    cout<<"Array 2"<<endl;
    for(int i=0;i<ar1.size();i++)
    {
        cout<<ar2.at(i)<<" ";
    }
    return 0;
}

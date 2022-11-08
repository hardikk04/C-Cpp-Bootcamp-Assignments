/* 9. C++ program to find the integers which come an odd number of times in an array
using C++ STL. */
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5>ar;
    cout<<"Enter the "<<ar.size()<<" values of an array"<<endl;
    for(int i=0;i<ar.size();i++)
    {
        cin>>ar.at(i);
    }
    int intergers=0;
    for(int i=0;i<ar.size();i++)
    {
        if(ar.at(i)%2)
        {
            intergers++;
        }
    }
    cout<<"The integers is "<<intergers<<endl;
    return 0;
}

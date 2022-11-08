// 7. Write a program to find sum of vector elements
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v;
    cout<<"Enter 5 element of vector"<<endl;
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    int temp=0;
    for(int i=0;i<v.size();i++)
    {
        temp= temp+v[i];
    }
    cout<<"The sum of all vector element is "<<temp;
    return 0;

}

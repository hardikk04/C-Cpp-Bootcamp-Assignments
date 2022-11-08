// 4. Write a program to Copy one vector’s elements to another vector.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v1,v2;
    cout<<"Enter the 5 element"<<endl;
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        v1.push_back(k);
    }
    v2= v1;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
}

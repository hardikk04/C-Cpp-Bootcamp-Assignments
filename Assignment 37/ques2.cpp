// 2. Declare a vector without initialization, insert some elements and print
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v;
    cout<<"Enter the 5 element"<<endl;
    for(int i=0;i<5;i++)
    {
        int k=0;
        cin>>k;
        v.push_back(k);
    }
    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;

}

// 3. Write a function to print the element of a vector and take input from the user.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v;
    cout<<"Enter the 5 Element"<<endl;
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

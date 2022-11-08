// 8. Write a program to find common elements between two vectors.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v1,v2;
    cout<<"Enter the 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        v1.push_back(k);
    }
    cout<<"Enter second element values"<<endl;
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        v2.push_back(k);
    }
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            if(v1.at(i)==v2.at(j))
            {
                cout<<v1[i]<<" ";
            }
        }
    }
    return 0;
}

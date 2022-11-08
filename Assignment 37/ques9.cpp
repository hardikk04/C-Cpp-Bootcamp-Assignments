// 9. Write a program to Push and print elements in a float vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <float>v;
    cout<<"Enter the 5 element"<<endl;
    for(int i=0;i<5;i++)
    {
        float k;
        cin>>k;
        v.push_back(k);
    }
    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;

}

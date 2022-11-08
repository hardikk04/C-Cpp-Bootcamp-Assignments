// 10. Write a program to check whether an element exists in a vector or not.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v;
    cout<<"Enter the 5 element"<<endl;
    for(int i=0;i<5;i++)
    {
        float k;
        cin>>k;
        v.push_back(k);
    }
    int temp;
    cout<<"Enter the element for search"<<endl;
    cin>>temp;
    int flag=0;
    for(int i=0;i<v.size();i++)
    {
        if(temp==v[i])
        {
            flag=1;
            break;
        }
    }
        if(flag)
         {
            cout<<"Exists in vector"<<endl;
        }
        else
        {
            cout<<"Not Exists in vector";
        }
    return 0;
}

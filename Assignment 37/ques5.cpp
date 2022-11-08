// 5. Find largest and smallest elements in a vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v;
    cout<<"Enter the 5 element"<<endl;
    for(int i=0;i<5;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    int temp = 9999;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<temp)
        {
            temp=v[i];
        }
    }
    cout<<"Smallest is "<<temp;
    return 0;

}

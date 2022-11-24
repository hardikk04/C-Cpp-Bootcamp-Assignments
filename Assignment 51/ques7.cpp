// 7. Write a C++ program to illustrate the find() function in unordered_multiset.

#include<bits/stdc++.h>
using namespace std;
class Unordered_multiset
{
private:
    unordered_multiset<int>m;
public:
    void setData()
    {
        cout<<"Enter values"<<endl;
        for(int i=0;i<5;i++)
        {
            int temp;
            cin>>temp;
            m.emplace(temp);
        }
    }

    void Display()
    {
        unordered_multiset<int>::iterator x=m.begin();

        for(x;x!=m.end();x++)
        {
            cout<<*x<<" ";
        }
        cout<<endl;
    }

    void Find(int a)
    {
        if(m.find(a)!=m.end())
        {
            cout<<"Found"<<endl;
        }
        else
        {
            cout<<"Not Found"<<endl;
        }
    }

};
int main()
{
    Unordered_multiset m;

    m.setData();
    m.Display();
    m.Find(1);

    return 0;
}

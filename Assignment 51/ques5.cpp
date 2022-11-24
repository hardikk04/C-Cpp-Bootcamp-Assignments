// 5. Write a C++ program to count the frequency of elements in unordered_multiset.
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
            m.insert(temp);
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

    void Frequency()
    {
        int f=0;
        unordered_multiset<int>::iterator x=m.begin(),y=m.begin();
        for(x;x!=m.end();x++)
        {
            for(y;y!=m.end();y++)
            {
                if(*x==*y)
                {
                    f++;
                }
            }
            cout<<"Frequency of "<<*x<<" is "<<f<<endl;
            f=0;
        }
    }
};
int main()
{
    Unordered_multiset m;

    m.setData();
    m.Display();
    m.Frequency();

    return 0;
}

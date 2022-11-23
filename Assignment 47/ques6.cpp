// 6. Write a program to find some key value pairs and print on the console.
#include<bits/stdc++.h>
using namespace std;

class Multimap
{
private:
    multimap<int,int>m;
public:
    void setData()
    {
        cout<<"Enter key and its value"<<endl;
        for(int i=0;i<3;i++)
        {
            int k,l;
            cin>>k>>l;
            m.insert(pair<int,int>(k,l));
        }
    }
    void DisplayAll()
    {
        multimap<int,int>::iterator x=m.begin();

        for(x;x!=m.end();x++)
        {
            cout<<"Key "<<x->first<<" Value "<<x->second<<endl;
        }
    }

    void FindAndPrint(int key,int value)
    {
        multimap<int,int>::iterator x=m.begin();
        int tkey,t=0,tvalue=0;
        for(x;x!=m.end();x++)
        {
            tkey = x->first;
            tvalue = x->second;
            if(tkey==key && tvalue == value)
            {
                cout<<"Found"<<endl;
                cout<<x->first<<" "<<x->second<<endl;
                break;
            }
        }
        cout<<"Not found"<<endl;
    }

};
int main()
{
    Multimap m;
    m.setData();
    m.DisplayAll();
    m.FindAndPrint(1,10);

    return 0;
}

/* 4. Create a map, and insert some pairs and find one pair out of the inserted pair and
replace it with another pair and print map. */
#include<iostream>
#include<iterator>
#include<map>
using namespace std;

class Map
{
private:
    map<int,int>m;
public:
    void setData()
    {
        cout<<"Enter the key and its value"<<endl;

        for(int i=0;i<5;i++)
        {
            int k,l;
            cin>>k>>l;
            m.insert(pair<int,int>(k,l));
        }
    }

    void Replace()
    {
        int index,value;
        cout<<"Enter Index and its value"<<endl;
        cin>>index>>value;
        m[index]=value;
    }

    void Display()
    {
        map<int,int>::iterator x=m.begin();

        for(x;x!=m.end();x++)
        {
            cout<<"Key "<<x->first<<" Value "<<x->second<<endl;
        }
    }

};

int main()
{
    Map m;

    m.setData();
    cout<<"Without Replace"<<endl;
    m.Display();
    m.Replace();
    cout<<"After Replace"<<endl;
    m.Display();

    return 0;
}

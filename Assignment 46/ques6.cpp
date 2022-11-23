/* 6. Create a map, use a member function to tell whether a map is empty or not and then
insert some pairs into the map and find the size of map. */
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
        cout<<"Enter key and its value"<<endl;

        for(int i=0;i<5;i++)
        {
            int k,l;
            cin>>k>>l;
            m.insert(pair<int,int>(k,l));
        }
    }

    void checkIsEmpty()
    {
        if(m.empty())
        {
            cout<<"Map is Empty"<<endl;
        }
        else
        {
            cout<<"Map is not Empty"<<endl;
        }
    }

    void checkSize()
    {
        cout<<"Size of map is "<<m.size()<<endl;
    }

    void Display()
    {
        map<int,int>::iterator x=m.begin();

        for(x;x!=m.end();x++)
        {
            cout<<"Key "<<x->first<<" Second "<<x->second<<endl;
        }
    }
};

int main()
{
    Map m;
    m.checkIsEmpty();
    m.checkSize();
    m.setData();
    m.Display();
    m.checkIsEmpty();
    m.checkSize();

    return 0;
}

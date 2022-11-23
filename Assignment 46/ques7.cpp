/* 7. Sort a given map in descending order based on values instead of keys in C++ STL.
Key value
1 6
2 8
6 3
8 2 */
#include<iostream>
#include<iterator>
#include<map>
using namespace std;
class Map
{
private:
    map<int,int,greater<int>>m;
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

    void Display()
    {
        map<int,int,greater<int>>::iterator x=m.begin();

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
    m.Display();

    return 0;
}

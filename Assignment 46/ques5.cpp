/* 5. Create a map, insert some pairs and Find the occurrence of each pair and print it on
the screen. */
#include<iostream>
#include<map>
#include<iterator>
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
        void Display()
        {
            map<int,int>::iterator x;

            for(x=m.begin();x!=m.end();x++)
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

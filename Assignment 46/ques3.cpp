/* 3. Create a map, insert some pairs and print all elements in reverse order using rbegin
and rend function. */
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
            map<int,int>::reverse_iterator x;

            for(x=m.rbegin();x!=m.rend();x++)
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

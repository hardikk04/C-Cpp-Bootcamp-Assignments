// 8. Create a function to search the element in the set.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int Search(int s)
{
    set<int>d={1,2,3,4,5};

    set<int>::iterator x;
    for(x=d.begin();x!=d.end();x++)
    {
        if(*(x)==s)
        {
            return 1;
        }
    }
    return 0;

}
int main()
{
    int s;
    cout<<"Enter the number for search : ";
    cin>>s;

    int temp=Search(s);

    if(temp)
    {
        cout<<s<<" is present in the set"<<endl;
    }
    else
    {
        cout<<s<<" is not present in the set"<<endl;
    }

    return 0;
}

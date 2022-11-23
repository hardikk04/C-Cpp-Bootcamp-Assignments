/* 2. Create a map, where insert keys and values as string type and integer type
respectively and print it on the screen. */
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string,int>m;

    cout<<"Enter your name and age"<<endl;

    for(int i=0; i<5;i++)
    {
        string s;
        int k;
        cin.ignore();
        getline(cin,s);
        cin>>k;
        m.insert(pair<string,int>(s,k));
    }

    map<string,int>::iterator x=m.begin();

    for(x;x!=m.end();x++)
    {
        cout<<"Name : "<<x->first<<" Age : "<<x->second<<endl;
    }

    return 0;
}

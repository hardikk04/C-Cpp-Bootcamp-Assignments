/* 9. You are given an array A of size N. You need to insert the elements of A into a
multimap(element as key and index as value) and display the results. Also, you need
to erase a given element x from the multimap and print "erased x" if successfully
erased, else print "not found". */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    array <int,5>arr;
    multimap<int,int>m;


    cout<<"Enter the element in array"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
        m.insert(pair<int,int>(i,arr[i]));
    }

    multimap<int,int>::iterator x=m.begin();

    for(x;x!=m.end();x++)
    {
        cout<<"Key "<<x->first<<" Value "<<x->second<<endl;
    }

    int k;
    cout<<"Enter the key you want to erase"<<endl;
    cin>>k;

    int flag =0;
    x=m.begin();
    for(x;x!=m.end();x++)
    {
        int t=x->first;
        if(k==t)
        {
            flag = 1;
            break;
        }
    }

    if(flag)
    {
        m.erase(k);
        cout<<"Key erased successfully"<<endl;
    }
    else
    {
        cout<<"Key not found"<<endl;
    }

    x=m.begin();
    for(x;x!=m.end();x++)
    {
        cout<<"Key "<<x->first<<" Value "<<x->second<<endl;
    }

    return 0;
}

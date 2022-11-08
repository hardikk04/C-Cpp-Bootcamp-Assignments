// 4. Returns the element from the given index using the STL array.
#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5>ar;
    cout<<"Enter the "<<ar.size()<<" Of elements"<<endl;
    for(int i=0;i<ar.size();i++)
    {
        cin>>ar.at(i);
    }
    int temp;
    cout<<"Enter the index for get the element"<<endl;
    cin>>temp;
    temp= temp-1;
    cout<<"Element of given index "<<ar.at(temp);
    return 0;
}

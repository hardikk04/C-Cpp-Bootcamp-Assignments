// 3. Find the first and last element using the STL array.
#include<iostream>
#include<array>
using namespace std;
int main()
{
array <int,10>ar;
cout<<"Enter the "<<ar.size()<<" values of array"<<endl;
for(int i=0;i<ar.size();i++)
{
cin>>ar.at(i);
}

cout<<"First index is "<<ar.front()<<endl;
cout<<"Last index is "<<ar.back()<<endl;
}

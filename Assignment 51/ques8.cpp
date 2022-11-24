// 8. Write a C++ program to illustrate the bucket_count() function in unordered_multiset.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset<int>m;

    m.insert(1);
    m.insert(2);
    m.insert(3);
    m.insert(4);
    m.insert(5);

    cout<<"Bucket count is "<<m.bucket_count()<<endl;

    return 0;
}

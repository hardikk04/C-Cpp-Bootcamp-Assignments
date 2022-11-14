/* 7. Given two sorted arrays A[] and B[] of sizes N and M respectively, the task is to
merge them in a sorted manner using priority_queue.
Example:
Input: A[] = { 5, 6, 8 }, B[] = { 4, 7, 8 }
Output: 4 5 6 7 8 8 */
#include<iostream>
#include<queue>
#include<array>
using namespace std;

void Sort(int a[],int b[],int n,int m)
{
    priority_queue<int,vector<int>,greater<int>>p;
    int arr[n+m];
    for(int i=0;i<3;i++)
    {
        p.push(a[i]);
    }
    for(int i=0;i<3;i++)
    {
        p.push(b[i]);
    }
    int i=0;
    while(!p.empty())
    {
        arr[i]=p.top();
        p.pop();
        i++;
    }

    for(int i=0;i<m+n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int a[]={5,6,8},b[]={4,7,8};

    int n,m;
    n= sizeof(a)/sizeof(a[0]);
    m= sizeof(b)/sizeof(b[0]);

    Sort(a,b,n,m);

    return 0;
}

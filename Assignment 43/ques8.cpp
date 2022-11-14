/* 8. Given an array arr[] of N elements, the task is to perform using priority_queue and
the following operation: Pick the two largest element from the array and remove these element. If the
elements are unequal then insert the absolute difference of the elements into the
array.
 Perform the above operations until the array has 1 or no element in it. If the array has
only one element left then print that element, else print “-1”.
Example:
Input: arr[] = { 3, 5, 2, 7 }
Output: 1
Explanation:
The two largest elements are 7 and 5. Discard them. Since both are not equal, insert
7 – 5 = 2 into the array. Hence, arr[] = { 3, 2, 2 }
The two largest elements are 3 and 2. Discard them. Since both are not equal, insert
3 – 2 = 1 into the array. Hence, arr[] = { 1, 2 }
The two largest elements are 2 and 1. Discard them. Since both are not equal, insert
2 – 1 = 1 into the array. Hence, arr[] = { 1 } */

#include<queue>
#include<iostream>
using namespace std;

void check(int arr[],int N)
{
    int a[N];

    priority_queue<int>p;

    for(int i=0;i<N;i++)
    {
        p.push(arr[i]);
    }

    int i=0;
    while(!p.empty())
    {
        a[i]=p.top();
        p.pop();
        i++;
    }

        int lar=-999;
    for(int i=0;i<N;i++)
    {
        if(a[i]>a[i+1])
        {
            lar=a[i];
        }
    }
        int s_lar=-999;
    for(int i=0;i<N;i++)
    {
        if(a[i]>a[i+1])
        {

        }
    }

    for(int i=0;i<N;i++)
    {
        if(s_lar!=lar)
        {
           int temp=s_lar-lar;
            p.push(temp);
        }
    }

    i=0;
    while(!p.empty())
    {
        a[i]=p.top();
        p.pop();
        i++;
    }

    int s;
    s=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[]={3,5,2,7};
    int N;
    N= sizeof(arr)/sizeof(arr[0]);

    check(arr,N);

    return 0;
}

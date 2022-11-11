/* 10. Given an array, print the Next Greater Element (NGE) for every element using stack.
Example:
Input: arr[] = [ 4 , 5 , 2 , 25 ]
Output: 4 –> 5
5 –> 25
2 –> 25
25 –> -1 */
#include<iostream>
#include<stack>
#include<array>
using namespace std;
int main()
{
    stack <int>s;
    array <int,4>arr={4,5,2,25};

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<arr[i+1])
        {
            int temp= arr[i+1];
            s.push(temp);
        }
        else if(arr[i]<arr[i+2])
        {
            int temp= arr[i+2];
            s.push(temp);
        }
        else
            s.push(-1);
    }
    int i=3;
    while(!s.empty())
    {

        cout<<arr.at(i)<<" -> "<<s.top()<<endl;
        s.pop();
        i--;
    }
    return 0;
}

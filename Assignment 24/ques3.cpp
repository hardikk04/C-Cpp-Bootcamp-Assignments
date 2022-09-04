// 3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int power(int x,int y);
int main()
{
    int x,y;
    cout<<"Enter the value of X and power Y"<<endl;
    cin>>x>>y;
   cout<<power(x,y)<<" is that";
}
int power(int x,int y)
{
    int i,total=1;
    for(i=1;i<=y;i++)
    {
        total = total * x;
    }
    return total;
}

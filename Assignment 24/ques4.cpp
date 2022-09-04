// 4. Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int com(int n, int r);
int fact(int n);
int main()
{

 int n;
 cout<<"Enter the lines"<<endl;
 cin>>n;

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<=i;j++)
     {
        int k=0;
        if(j==0)
            while(k++ <= (n/2 - i+1))
            {
                cout<<" ";
            }
            cout<<com(i,j)<<" ";

     }
     cout<<endl;
 }

}
int fact(int n)
{
    int i,fact=1;
    if(n<=0)
        return 1;
    for(i=1;i<=n;i++)
    {
        fact= fact * i;
    }
    return fact;
}
int com(int n, int r)
{
    int com;
    com= fact(n)/(fact(n-r)*fact(r));
}

// 6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
    int a,b;
    cout<<"Enter the value of A :"<<endl;
    cin>>a;
    cout<<"Enter the value of B :"<<endl;
    cin>>b;
    cout<<"Before swap A = "<<a<<"  B = "<<b<<endl;
    swap(a,b);
    cout<<"After swap A = "<<a<<"  B = "<<b<<endl;

}
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

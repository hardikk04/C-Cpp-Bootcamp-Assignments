// 6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{

    float a,b,c,avg=0;
    cout<<"Enter the three values to find an average"<<endl;
    cin>>a>>b>>c;
    avg = (a + b + c)/3;
    cout<<"Average is "<<avg;
}

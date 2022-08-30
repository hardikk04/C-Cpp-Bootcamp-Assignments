// 5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    float l,w,h;
    float cuboid=0;
    cout<<"Enter the value of Length, Width and height"<<endl;
    cin>>l>>w>>h;
    cuboid=l*w*h;
    cout<<"Volume of cuboid is "<<cuboid;

}

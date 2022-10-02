/* 6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.

Example-
int main()
{
int duration;
cout<<”Enter time duration in minutes”;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
} */
#include<iostream>
using namespace std;
class Time
{
private:
    int min=0,hour=0,sec=0;
public:
    Time(){}
    Time(int t)
    {
     hour = t/3600;
     min = t%3600;
    }
    void display()
    {
        cout<<"Hour="<<hour<<" min="<<min<<endl;
    }

};
int main()
{
int duration;
cout<<"Enter time duration in Min:";
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}

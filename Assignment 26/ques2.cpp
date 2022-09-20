/* 2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time) */
#include<iostream>
using namespace std;

class Time
{
    private:
        int hour,min,sec;
    public:
        void setTime(int h,int m,int s)
        {
            hour = h;
            min = m;
            sec = s;
        }
        void showTime()
        {
            cout<<hour<<" Hours "<<min<<" Min "<<sec<<" Sec"<<endl;
        }
        void normalize()
        {

        }
        Time add(Time T)
        {
            Time temp;
            temp.hour=T.hour+hour;
            temp.min=T.min+min;
            temp.sec=T.sec+sec;
            return temp;
        }
};

int main()
{
    Time t1,t2,t3;
    t1.setTime(2,3,4);
    t1.showTime();
    t2.setTime(5,6,7);
    t2.showTime();
    t3=t1.add(t2);
    t3.showTime();

}

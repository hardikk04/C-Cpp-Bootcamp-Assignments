/* 7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
return 0;
} */
#include<iostream>
using namespace std;
class Minute
{
private:
    int min;
public:
    Minute(){}
    Minute(int m)
    {
        min =m;
    }
    void display()
    {
        cout<<"Minutes is "<<min<<endl;
    }
};
class Time
{
private:
    int hour,min;
public:
    Time(){}
    Time(int h,int m)
    {
        hour = h;
        min = m;
    }
    void setData(int h,int m)
    {
        hour = h;
        min = m;
    }
    void display()
    {
        cout<<"Hour="<<hour<<" Min="<<min<<endl;
    }
    int getH()
    {
        return hour;
    }
    int getM()

    {
        return min;
    }
    operator Minute()
    {
        Minute m(min);
        return m;

    }
};

int main()
{
    Time t1(2,60);
    t1.display();
    Minute m1;
    m1.display();
    m1=(Minute)t1; // Fetch minute from time
    t1.display();
    m1.display();
return 0;
}

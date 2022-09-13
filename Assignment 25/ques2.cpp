/* 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time. */

#include<iostream>
using namespace std;

class Time
{
    private:
        int hr,min,sec;

    public:

        void set_value()
        {

            cout<<"Enter the hours, min and second"<<endl;
            cin>>hr>>min>>sec;

        }

        void display()
        {
            cout<<endl<<hr<<" Hours "<<min<<" Min "<<sec<<" Second "<<endl;
        }

};

int main()
{
    Time t1,t2;
   t1.set_value();
   t2.set_value();
   cout<<endl<<"Display Time";
   t1.display();
   t2.display();

}

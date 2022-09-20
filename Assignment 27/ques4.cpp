/* 4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time. */
#include<iostream>
using namespace std;
class Time
{
    private:
        int hours,minutes,seconds;
    public:
        Time(){}
        Time(int h,int m,int s)
        {
            hours= h;
            minutes  = m;
            seconds = s;
        }
        void setTime()
        {
            int h,m,s;
                cout<<"Enter Time"<<endl;
                cout<<"-----------------"<<endl;
                cout<<"Enter Hours : ";
                cin>>h;
                cout<<"Enter Minutes : ";
                cin>>m;
                cout<<"Enter Seconds : ";
                cin>>s;
                cout<<endl;
                cout<<endl;
            hours= h;
            minutes  = m;
            seconds = s;
        }
        void showData()
        {
            cout<<"Entered Time"<<endl;
            cout<<"Hours  : "<<hours<<endl;
            cout<<"Minutes  : "<<minutes<<endl;
            cout<<"Seconds  : "<<seconds<<endl;
            cout<<endl;
                cout<<endl;
        }
        friend istream& operator>>(istream &,Time &);
        friend int operator==(Time,Time);
        friend ostream& operator<<(ostream &,Time);
};
        istream& operator>>(istream &c,Time &T)
        {

                c>>T.hours;
                c>>T.minutes;
                c>>T.seconds;
                return c;
        }
        ostream& operator<<(ostream &os ,Time t)
        {
            os<<"Hours  : "<<t.hours<<endl;
            os<<"Minutes  : "<<t.minutes<<endl;
            os<<"Seconds  : "<<t.seconds<<endl;
            os<<endl;
            return os;
        }
int operator==(Time t1,Time t2)
{
    if(t1.minutes==t2.minutes&&t1.seconds==t2.seconds&&t1.hours==t2.hours)
        return 1;
        else
    return 0;

}
int main()
{
    Time t1,t2;
   cin>>t1>>t2;
   // t1.setTime();
    //t2.setTime();
    cout<<t1<<t2;

   if(t1==t2)
   {
       cout<<"Time are same";
   }
   else
   {
       cout<<"Time are unique";
   }
}

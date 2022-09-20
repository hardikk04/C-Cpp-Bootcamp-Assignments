/*5 . Define a class Date and write a program to Display Dateand initialise date object
using Constructors. */
#include<iostream>
using namespace std;

class Date
{
    private:
        int day,month,year;
    public:
        Date(int d,int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }
        Date(){};
        void setDate(int d,int m,int y)
        {
            day = d;
            month = m;
            year = y;
        }
        void showDate()
        {
            cout<<"Date"<<endl<<day<<" "<<month<<" "<<year<<endl;
        }
};
int main()
{
    Date d1(16,9,2022),d2;
    int d,m,y;
    d1.showDate();
    cout<<"Enter day ,month and year:";
    cin>>d>>m>>y;
    d2.setDate(d,m,y);
    d2.showDate();
}

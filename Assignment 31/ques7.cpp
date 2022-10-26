/* 7. Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.

3. Search a given Employee by emp-code. */
#include<iostream>
using namespace std;
class Employee
{
private:
    int emp_code;
    string name;
public:
    Employee(){}
    void setWorkData()
    {
        cout<<"---------------------FULL-TIME---------------------"<<endl;
        fflush(stdin);
        cout<<"Enter Your name : ";
        cin>>name;
        cout<<endl;
        cout<<"Enter Employee Code : ";
        cin>>emp_code;
        cout<<endl;
    }
    int getEmp()
    {
        return emp_code;
    }
    string getName()
    {
        return name;
    }
};
class Fulltime:public Employee
{
private:
    int daily_Rate,number_of_days,Fsalary;
public:
    Fulltime(){}
    void setFulltimeData()
    {
        setWorkData();
        cout<<"Enter Daily Rate : ";
        cin>>daily_Rate;
        cout<<endl;
        cout<<"Enter Number of Days : ";
        cin>>number_of_days;
        cout<<endl;
        cout<<"Enter your Full-Time Salary : ";
        cin>>Fsalary;
        cout<<endl;
    }
    void displayFull()
    {
        cout<<"--------------------------------------------------"<<endl;
        cout<<"Name   :    "<<getName()<<endl;
        cout<<"Employee ID   :    "<<getEmp()<<endl;
        cout<<"Daily Rate   :    "<<daily_Rate<<endl;
        cout<<"Number of Days   :    "<<number_of_days<<endl;
        cout<<"Full-Time Salary   :    "<<Fsalary<<endl;
        cout<<"--------------------------------------------------"<<endl;
    }
    void searchId(int id)
    {
        if(id==getEmp())
        {
            displayFull();
        }
    }
    int getFullTime_Salary()
    {
        return Fsalary;
    }
    int getDailyRate()
    {
        return daily_Rate;
    }
    int getNumberOfDays()
    {
        return number_of_days;
    }
};
/* class Parttime:public Employee
{
private:
    int working_hour,hourly_rate,Psalary;
public:
    Parttime(){}
    void setParttimeData()
    {
        setWorkData();
        cout<<"Enter Working hour : ";
        cin>>working_hour;
        cout<<endl;
        cout<<"Enter Hourly Rate : ";
        cin>>hourly_rate;
        cout<<endl;
        cout<<"Enter your Part-Time Salary : ";
        cin>>Psalary;
        cout<<endl;
    }
    void displayPart()
    {
        cout<<"---------------------PART-TIME---------------------"<<endl;
        cout<<"Name   :    "<<getName()<<endl;
        cout<<"Employee ID   :    "<<getEmp()<<endl;
        cout<<"Working Hour   :    "<<working_hour<<endl;
        cout<<"Hourly Rate   :    "<<hourly_rate<<endl;
        cout<<"Part-Time Salary   :    "<<Psalary<<endl;
        cout<<"--------------------------------------------------"<<endl;
    }
    int getWorking_hour()
    {
        return working_hour;
    }
    int getHourly_rate()
    {
        return hourly_rate;
    }
    int getPartTime_Salary()
    {
        return Psalary;
    }
}; */
int main()
{
    int choice;
        int i=0,j=0;
            Fulltime *f = new Fulltime[10];
    while(choice)
    {
    cout<<"1. Enter Record"<<endl;
    cout<<"2. Display Record"<<endl;
    cout<<"3. Search Record"<<endl;
    cout<<"0. Exit the Program"<<endl<<endl;
    cout<<"Enter your Choice"<<endl;
    cin>>choice;
    cout<<endl;
    switch(choice)
    {
        case 1:
            f[i].setFulltimeData();
            i++;
        break;
        case 2:
            for(j=0;i>j;j++)
        {
            f[j].displayFull();
        }
        break;
        case 3:
                int id;
                cout<<"Enter Employee ID : ";
                cin>>id;
                for(j=0;i>j;j++)
                {
                f[j].searchId(id);
                }
        default: cout<<"ENTERED INVALID OPTION"<<endl;
    }
    }
        delete []Fulltime;
    return 0;
}

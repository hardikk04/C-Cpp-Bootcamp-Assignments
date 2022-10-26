/* 10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions. */
#include<iostream>
using namespace std;
class Worker
{
private:
    int code;
    string name;
    float salary;
public:
    Worker(){}
    void setWorkerData()
    {
        cout<<endl;
        cout<<"------------------------------"<<endl<<endl;
        cout<<"Enter Code : ";
        cin>>code;
        cout<<endl;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<endl;
        cout<<"Enter Salary : ";
        cin>>salary;
        cout<<endl;
    }
    int getCode()
    {
        return code;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
};
class Officer
{
private:
    float DA,HRA;
public:
    Officer(){}
    void setOfficerData()
    {
        cout<<"Enter DA : ";
        cin>>DA;
        cout<<endl;
        cout<<"Enter HRA : ";
        cin>>HRA;
        cout<<endl;
    }
    float getHRA()
    {
        return HRA;
    }
    float getDA()
    {
        return DA;
    }
};
class Manager:public Worker,public Officer
{
private:
    float TA,gross;
public:
    Manager(){}
    void setManagerData()
    {
        setWorkerData();
        setOfficerData();
        cout<<endl;
    }
    float getTA()
    {
        TA = getSalary()/10;
        return TA;
    }
    float getGross()
    {
        gross = getSalary() + getTA() + getHRA() + getDA();
        return gross;
    }
    void display()
    {
        cout<<"Code : "<<getCode()<<endl;
        cout<<"Name : "<<getName()<<endl;
        cout<<"Salary : "<<getSalary()<<endl;
        cout<<"DA : "<<getDA()<<endl;
        cout<<"HRA : "<<getHRA()<<endl;
        cout<<"TA : "<<getTA()<<endl;
        cout<<"Gross Salary : "<<getGross()<<endl;
    }
};
int main()
{
    int count;
    cout<<"Enter Manager Count : ";
    cin>>count;
    cout<<endl;
    Manager *m;
    m = new Manager[count];
    for(int i=0;i<count;i++)
    {
        cout<<"Enter Worker Information for "<<count<<endl;
        m[i].setManagerData();
    }
    for(int i=0;i<count;i++)
    {
        cout<<"-------------------------------"<<endl;
        cout<<"MANAGER INFOMATION"<<endl;
        cout<<"-------------------------------"<<endl;
        m[i].display();
    }
    delete []m;
    return 0;

}

/*4. Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary */
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class Person
{
private:
    string name,address;
    long long phone;
public:
    Person(){}
    Person(string name,string address,long long phone)
    {
        this->name=name;
        this->address=address;
        this->phone = phone;
    }
    void setPersonData()
    {
        cout<<"Enter name :";
        cin>>name;
        cout<<endl<<"Enter address :";
        cin>>address;
        cout<<endl<<"Enter phone number :";
        cin>>phone;
    }
    string getPname()
    {
        return name;
    }
    string getPaddress()
    {
        return address;
    }
    long long getPphone()
    {
        return phone;
    }
};
class Employee:public Person
{
private:
    int eno;
public:
    Employee(){}
    Employee(int eno)
    {
        this->eno = eno;
    }
    void setEdata()
    {
        cout<<endl<<"Enter Employee Id :";
        cin>>eno;
    }
    int getEno()
    {
        return eno;
    }
};
class Manager:public Employee
{
private:
    string designation, department_name;
    int salary;
public:
    Manager(){}
    Manager(string designation,string department_name,int salary)
    {
        this->designation=designation;
        this->department_name=department_name;
        this->salary = salary;
    }
    int getSalary()
    {
        return salary;
    }
    void setMdata()
    {
        cout<<"------------------------------"<<endl;
        setPersonData();
        setEdata();
        cout<<endl<<"Enter Designation :";
        cin>>designation;
        cout<<endl<<"Enter Department Name :";
        cin>>department_name;
        cout<<endl<<"Enter Salary :";
        cin>>salary;
    }
};
int main()
{
    Manager *m;
    int size;
    cout<<"How many Manager you Want to Enter :";
    cin>>size;
    m= new Manager[size];
    for(int i=0;i<size;i++)
    {
        cout<<"-------------------------------"<<endl;
        cout<<"Enter "<<i+1<<" Manager details"<<endl;
        m[i].setMdata();
    }
    int temp=-9999;
    string tempp;
    for(int i=0;i<size;i++)
    {

        if(m[i].getSalary()>temp)
        {
            temp = m[i].getSalary();
            tempp = m[i].getPname();
        }
    }
    delete []m;
    cout<<"-----------------------------";
    cout<<endl<<tempp<<" is take "<<temp<<" Highest salary";
    return 0;
}

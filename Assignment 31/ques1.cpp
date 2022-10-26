/* 1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary. */
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
    char name[20];
    int age;
public:
        Person(){}
        Person(const char *name,int age)
        {
            strcpy(this->name,name);
            this->age = age;
        }
        void setName(const char *name)
        {
            strcpy(this->name,name);
        }
        void setAge(int age)
        {
            this->age = age;
        }
        char * getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
};
class Employee:public Person
{
private:
    int empid,salary;
public:
    Employee(){}
    Employee(int empid,int salary)
    {
        this->empid = empid;
        this->salary = salary;
    }
    void setEmpid(int empid)
    {
        this->empid = empid;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getEmpid()
    {
        return empid;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    Person p1;
    p1.setName("Hardik");
    p1.setAge(19);
    cout<<p1.getName()<<endl;
    cout<<p1.getAge()<<endl;
    Employee e1;
    e1.setName("Hardik Sisoidya");
    e1.setAge(19);
    e1.setEmpid(7);
    e1.setSalary(50000);
    cout<<"INHERITING"<<endl;
    cout<<e1.getName()<<endl;
    cout<<e1.getAge()<<endl;
    cout<<e1.getEmpid()<<endl;
    cout<<e1.getSalary()<<endl;
    return 0;
}

/* 3. Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.  */
#include<iostream>
using namespace std;
class Student
{
private:
    int maths,physics,chemistry;
public:
    Student(){}
    Student(int maths,int physics,int chemistry)
    {
        this->maths = maths;
        this->physics = physics;
        this->chemistry = chemistry;
    }
    void setData(int maths,int physics,int chemistry)
    {
        this->maths = maths;
        this->physics = physics;
        this->chemistry = chemistry;
    }
    int getMaths()
    {
        return maths;
    }
    int getChemistry()
    {
        return chemistry;
    }
    int getPhysics()
    {
        return physics;
    }
};
class Derived1:public Student
{
    float total;
public:
    void Total()
    {
        total = getMaths() + getChemistry() + getPhysics();
    }
    float getTotal()
    {
        return total;
    }

};
class Derived2:public Derived1
{
private:
    float per;
public:
    void calPercent()
    {
        per = getTotal()/3;
    }
    void display()
    {
        cout<<"Maths ="<<getMaths()<<endl;
        cout<<"Physics ="<<getPhysics()<<endl;
        cout<<"Chemistry ="<<getChemistry()<<endl;
        cout<<"Your Percentage is "<<per;
    }
};
int main()
{
    Derived2 D;
    D.setData(40,45,50);
    D.Total();
    D.calPercent();
    D.display();
}

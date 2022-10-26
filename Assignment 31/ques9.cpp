/* 9. Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist. */
#include<iostream>
using namespace std;
class Student
{
private:
    int id;
    string name;
public:
    Student(){}
    void setStudentData()
    {
        cout<<"Enter Roll No. : ";
        cin>>id;
        cout<<endl;
        cout<<"Enter Student Name : ";
        cin>>name;
        cout<<endl;
    }
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
};
class StudentExam:public Student
{
private:
    float s1,s2,s3,s4,s5,s6;
public:
    StudentExam(){}
    void setStudentexamData()
    {
            cout<<endl;
            setStudentData();
            cout<<"Enter Marks for Subject 1 : ";
            cin>>s1;
            cout<<endl;
            cout<<"Enter Marks for Subject 2 : ";
            cin>>s2;
            cout<<endl;
            cout<<"Enter Marks for Subject 3 : ";
            cin>>s3;
            cout<<endl;
            cout<<"Enter Marks for Subject 4 : ";
            cin>>s4;
            cout<<endl;
            cout<<"Enter Marks for Subject 5 : ";
            cin>>s5;
            cout<<endl;
            cout<<"Enter Marks for Subject 6 : ";
            cin>>s6;
            cout<<endl;

        cout<<"------------------------------";
        cout<<endl;
    }
    float getM1()
    {
        return s1;
    }
    float getM2()
    {
        return s2;
    }
    float getM3()
    {
        return s3;
    }
    float getM4()
    {
        return s4;
    }
    float getM5()
    {
        return s5;
    }
    float getM6()
    {
        return s6;
    }
};
class StudentResult:public StudentExam
{
private:
    float percentage;
public:
    StudentResult(){}
    void display()
    {
        cout<<"Roll No.  : "<<getId()<<endl;
        cout<<"Student Name  : "<<getName()<<endl<<endl;
        int temp=0;

            temp = getM1()+getM2()+getM3()+getM4()+getM5()+getM6();
            cout<<"Marks of Subject 1 : "<<getM1()<<endl;
            cout<<"Marks of Subject 2 : "<<getM2()<<endl;
            cout<<"Marks of Subject 3 : "<<getM3()<<endl;
            cout<<"Marks of Subject 4 : "<<getM4()<<endl;
            cout<<"Marks of Subject 5 : "<<getM5()<<endl;
            cout<<"Marks of Subject 6 : "<<getM6()<<endl;

        temp=temp/6;
        cout<<endl;
        cout<<"Total Percentage  :  "<<temp;
        cout<<endl;
    }
};
int main()
{
    int size;
    cout<<"Enter No. of Student you want? : ";
    cin>>size;
    cout<<endl;
    StudentResult *r;
    r = new StudentResult[size];
    if(!r)
    {
        cout<<"Memory Allocation Failed";
        return 0;
    }
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Student "<<i+1<<" Marks"<<endl;
        r[i].setStudentexamData();
    }
    for(int i=0;i<size;i++)
    {
        cout<<"************STUDENT" <<i+1<< "MARKS************"<<endl;
        cout<<"------------------------------"<<endl;
        r[i].display();
    }
    delete []r;
    return 0;
}

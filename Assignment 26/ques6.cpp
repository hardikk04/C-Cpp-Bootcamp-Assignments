/* 6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details. */
#include<iostream>
using namespace std;

class Student
{
    private:
        int mark;
        char grade;
    public:
        Student(){};
        Student(int m , char g)
        {
            mark = m;
            grade = g;
        }
        void show()
        {
            cout<<"Marks is "<<mark<<" Grade is "<<grade<<endl;
        }
        void setData(int m,char g)
        {
            mark = m;
            grade = g;
        }
};
int main()
{
    Student s1,s2(91,'A');
    int M;
    char G;
    cout<<"Enter the marks and grade:";
    cin>>M;
    cin>>G;
    s1.setData(M,G);
    s1.show();
    s2.show();

}

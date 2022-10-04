// 5. Create a student class and overload new and delete operators outside the class.
#include<iostream>
using namespace std;
class Studemt
{
private:
    string name;
    int age;
public:
    Student(){}
    Student(string name,int age)
    {
        this->name= name;
        this->age = age;
    }
    void setData(string name,int age)
    {
        this->name= name;
        this->age = age;
    }
    void display()
    {
        cout<<"Name is "<<name<<endl<<"Age is "<<age<<endl;
    }
    friend void *operator new(size_t);
};
void *operator new(Student S,size_t size)
{
    void *ptr = new size
}
// incompleted

/* 11. Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function. */
#include<iostream>
using namespace std;
class Marks
{
private:
    int marks;
public:
    void input()
    {
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void display()
    {
        cout<<"Marks is "<<marks<<endl;
    }
    Marks* operator->()
    {
        return this;
    }
};
int main()
{
    Marks m1;
    m1.input();
    m1->display();
}

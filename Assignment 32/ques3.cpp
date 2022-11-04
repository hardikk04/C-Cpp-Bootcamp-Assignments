/* 3. Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class. */
#include<iostream>
using namespace std;
class Animal
{
public:
    void sound()
    {
        cout<<"Animal sound function called"<<endl;
    }
};
class Dog:public Animal
{
public:
    void sound()
    {
        cout<<"Dog sound function called"<<endl;
    }
};
int main()
{
    Animal a;
    Dog d;
    a.sound();
    d.sound();
    d.Animal::sound();
}

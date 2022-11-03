/* 9. A company has following details of their employees in the file 'emp.dat'
a. Emp Id
b. Emp Name
c. Emp Address
d. Emp Dept (Admin/Sales/Production/IT)
e. Emp Phone
f. Emp Age
Write a C++ program to read the above file. Create a new file such as Adm.dat,
Sal.dat, Pro.dat, IT.dat respectively to store the employee details according to their
department. */
#include<iostream>
#include<fstream>
using namespace std;
class Company
{
private:
    int id,age;
    long long phone;
    string name,address,dept;
public:
    Company(){}
    void setData()
    {
        cout<<"------------------------------------"<<endl;
        cout<<"Enter the ID : ";
        cin>>id;
        cout<<endl;
        cout<<"Enter the Name : ";
        cin.get();
        getline(cin,name);
        cout<<endl;
        cout<<"Enter the Address : ";
        cin.get();
        getline(cin,address);
        cout<<endl;
        int choice;
        cout<<"Enter the Dept \nEnter 1 for Admin\nEnter 2 for Sales\nEnter 3 for Production\nEnter 4 for IT"<<endl;
        cin>>choice;
        if(choice==1)
        {
            dept = "Admin";
        }
        else if(choice==2)
        {
            dept = "Sales";
        }
        else if(choice==3)
        {
            dept = "Production";
        }
        else if(choice==4)
        {
            dept = "IT";
        }
        else
        {
            cout<<"Wrong input";
            cout<<endl;
        }
        cout<<"Enter your phone Number : ";
        cin>>phone;
        cout<<endl;
        cout<<"Enter your Age : ";
        cin>>age;
        cout<<endl;
        cout<<"RECORED ADDED SUCCESSFULL"<<endl;
        cout<<"------------------------------------"<<endl;

        if(choice==1)
        {
        ofstream fout;
        fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/admin.txt");
        if(!fout)
        {
            cout<<"File does'nt open"<<endl;
        }
        else
        {
            fout<<id<<endl;
            fout<<name<<endl;
            fout<<address<<endl;
            fout<<dept<<endl;
            fout<<phone<<endl;
            fout<<age<<endl;
            fout.close();
        }
        }
        else if(choice==2)
        {
        ofstream fout;
        fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/Sales.txt");
        if(!fout)
        {
            cout<<"File does'nt open"<<endl;
        }
        else
        {
            fout<<id<<endl;
            fout<<name<<endl;
            fout<<address<<endl;
            fout<<dept<<endl;
            fout<<phone<<endl;
            fout<<age<<endl;
            fout.close();
        }
        }
        else if(choice==3)
        {
        ofstream fout;
        fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/Production.txt");
        if(!fout)
        {
            cout<<"File does'nt open"<<endl;
        }
         else
        {
            fout<<id<<endl;
            fout<<name<<endl;
            fout<<address<<endl;
            fout<<dept<<endl;
            fout<<phone<<endl;
            fout<<age<<endl;
            fout.close();
        }
        }
        else if(choice==4)
        {
        ofstream fout;
        fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/IT.txt");
        if(!fout)
        {
            cout<<"File does'nt open"<<endl;
        }
         else
        {
            fout<<id<<endl;
            fout<<name<<endl;
            fout<<address<<endl;
            fout<<dept<<endl;
            fout<<phone<<endl;
            fout<<age<<endl;
            fout.close();
        }
        }
    }
};
int main()
{
    int choice;
    while(1)
    {
        cout<<"1. Add Record";
        cout<<endl;
        cout<<"0. Exit";
        cout<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<endl;

        Company c;
        switch(choice)
        {
            case 1:c.setData();
            break;
            case 0: return 0;
        }
    }
}

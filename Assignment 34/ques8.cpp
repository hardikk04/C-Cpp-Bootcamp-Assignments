/* 8. A file 'Employee.txt' contains empno and empname. Write a C++ program to add and
read contents of this file and search for an employee whose name is 'XYZ'. */
#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
private:
    int empno;
    string name;
public:
    Employee(){}
    void setData()
    {
        cout<<"------------------------------------"<<endl;
        cout<<"Enter the Employee ID No. : "<<endl;
        cin>>empno;
        cout<<"Enter the Employee Name : "<<endl;
        cin.get();
        getline(cin,name);
        cout<<endl;
        cout<<"Recored added successfully"<<endl;
        cout<<"------------------------------------"<<endl;
        ofstream fout;
        fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques8.txt",ios::app);
        if(!fout)
        {
            cout<<"File Does not open";
        }
        fout<<empno<<endl<<name<<endl;
        fout.close();
    }
    void display()
    {
        ifstream fin;
        fin.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques8.txt");
        if(!fin)
        {
            cout<<"File does not open";
        }
        Employee E;
        while(!fin.eof())
        {
            fin>>E.empno;
            fin.ignore();
            getline(fin,E.name);

            E.print();
        }
        fin.close();
    }
    void print()
    {
        cout<<"--------SHOW DATA---------"<<endl;
        cout<<endl;
        cout<<"Employee No. : "<<empno;
        cout<<endl;
        cout<<"Employee Name : "<<name;
        cout<<endl;
        cout<<"--------------------------"<<endl;
    }
    void searchEmployee(string name)
    {
        ifstream fin;
        fin.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques8.txt");
        if(!fin)
        {
            cout<<"File does not open";
        }
        Employee E;
        while(!fin.eof())
        {
            fin>>E.empno;
            fin.ignore();
            getline(fin,E.name);
            if(E.name ==  name)
            {
            E.print();
            }
        }

        fin.close();
    }
};
int main()
{
        int choice;
    while(1)
    {
        cout<<"1. Enter for add data"<<endl;
        cout<<"2. Read and display data"<<endl;
        cout<<"3. Search by name"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>choice;


        Employee e;
        string name;
        switch(choice)
        {
            case 1: e.setData();
                    break;
            case 2: e.display();
                    break;
            case 3: cout<<"Enter the name : ";
                    fflush(stdin);
                    getline(cin,name);
                    e.searchEmployee(name);
                    break;
            default : return 0;
        }
    }
}

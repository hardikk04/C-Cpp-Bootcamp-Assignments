/* 10. Write a C++ program to create a file which has information Name, Account number,
Balance and perform following operations:
a. Add record
b. Display content of file
c. Display name of person having balance > 10,000 */
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
class Bank
{
private:
    string name;
    long long acno,balance;
public:
    void setData()
    {
        cout<<"------------------------------"<<endl;
        cout<<"Enter your Name : ";
        cin.get();
        getline(cin,name);
        cout<<endl;
        cout<<"Enter your Account Number : ";
        cin>>acno;
        cout<<endl;
        cout<<"Enter your Balance : ";
        cin>>balance;
        cout<<endl;
        cout<<"------------------------------"<<endl;
        cout<<"RECORD ADDED SUCCESSFULLY"<<endl;
        cout<<"------------------------------"<<endl;

        ofstream fout;
        fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques10.txt",ios::app);
        if(!fout)
        {
            cout<<"FILE DOES NOT OEPN";
        }
        else
        {
            fout<<name;
            fout<<endl;
            fout<<acno;
            fout<<endl;
            fout<<balance;
            fout<<endl;
        }
        fout.close();
    }
    void display()
    {
        ifstream fin;
        fin.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques10.txt");
        if(!fin)
        {
            cout<<"FILE DOES NOT OPEN"<<endl;
        }
        else
        {

            Bank B;
            while(!fin.eof())
            {
                getline(fin,B.name);
                fin>>B.acno;
                fin>>B.balance;


                B.print();

            }
                fin.close();
        }
    }
    void print()
    {
                cout<<"------------ENTERD DETAILS------------"<<endl;
                cout<<"Name : "<<name<<endl;
                cout<<"Account No : "<<acno<<endl;
                cout<<"Balance : "<<balance<<endl;
                cout<<"--------------------------------------"<<endl;

    }
    void less_balance()
    {
        ifstream fin;
        fin.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques10.txt");
        if(!fin)
        {
            cout<<"FILE DOES NOT OPEN"<<endl;
        }
        else
        {

            fin.ignore();
            int temp=0;
            while(!fin.eof())
            {
                fin.ignore();
                getline(fin,name);
                fin>>acno;
                fin>>balance;


                if(balance>10000)
                {
                    temp++;
                    cout<<name<<" Have more than 10000"<<endl;
                }
            }
                if(temp==0)
                {
                    cout<<"No one have more than 10000"<<endl;
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
        cout<<"1. for Add Record"<<endl;
        cout<<"2. for Display Content of File"<<endl;
        cout<<"3. for Display name of person having balance > 10,000"<<endl<<endl;
        cout<<"0. for Exit the Program"<<endl;

        cout<<"ENTER  YOUR CHOICE : ";
        cin>>choice;

        Bank b;
        switch(choice)
        {
            case 1: b.setData();
            break;
            case 2: b.display();
            break;
            case 3: b.less_balance();
            break;
            case 0: return 0;
            default : cout<<"Invalid"<<endl;
        }
    }
}

/* 8 - In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers. */
#include<iostream>
using namespace std;
class Bank
{
private:
    string name;
    long long phone;
public:
    Bank(){}
    void setBankData()
    {
        cout<<endl;
        cout<<"Enter Customer Name  : ";
        cin>>name;
        cout<<endl;
        cout<<"Enter Customer Phone Number  : ";
        cin>>phone;
        cout<<endl;
    }
    string getName()
    {
        return name;
    }
    long long getPhone()
    {
        return phone;
    }
};
class Depositor:public Bank
{
private:
    long long accno,balance;
public:
    Depositor(){}
    void setDepositorData()
    {
        cout<<"Enter Customer A/C No : ";
        cin>>accno;
        cout<<endl;
        cout<<"Enter Balance : ";
        cin>>balance;
        cout<<endl;
    }
    long long getAccno()
    {
        return accno;
    }
    long long getBalance()
    {
        return balance;
    }
};
class Borrower:public Depositor
{
private:
    long long loan_no,loan_amount;
public:
    Borrower(){}
    void setBorrowerData()
    {
        setBankData();
        setDepositorData();
        cout<<"Enter Loan No : ";
        cin>>loan_no;
        cout<<endl;
        cout<<"Enter Loan Amount : ";
        cin>>loan_amount;
        cout<<endl;
        cout<<"-------------------------------------";
        cout<<endl;
    }
    void display()
    {
        cout<<endl;
        cout<<"Customer Name   :    "<<getName()<<endl;
        cout<<"Customer Phone Number   :    "<<getPhone()<<endl;
        cout<<"Customer A/C Number   :    "<<getAccno()<<endl;
        cout<<"Customer Balance   :    "<<getBalance()<<endl;
        cout<<"--------------------------------------";
        cout<<endl;
        cout<<"Loan Number     :     "<<loan_no<<endl;
        cout<<"Loan Amount     :     "<<loan_amount<<endl;
        cout<<"--------------------------------------";
        cout<<endl;
    }
};
int main()
{
    int size;
    cout<<"Enter No. Of Customer Details you want : ";
    cin>>size;
    cout<<endl;
    Borrower *b;
    b = new Borrower[size];
    if(!b)
    {
        cout<<"Memory allocation failed";
        return 0;
    }
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Customer "<<i+1<<" Details"<<endl;
        b[i].setBorrowerData();
    }
    for(int i=0;i<size;i++)
    {
        cout<<"Customer "<<i+1<<" Details"<<endl;
        b[i].display();
    }
    delete []b;
    return 0;
}

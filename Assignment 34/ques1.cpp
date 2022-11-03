/* 1. Write a C++ program to create a file and print “File created successfully” and throw
an error if file is not created. */
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/abc.txt");
    if(!fout)
    {
        cout<<"File is not created";
    }
    else
    {
        cout<<"File created Successfully";
    }
    fout.close();
}

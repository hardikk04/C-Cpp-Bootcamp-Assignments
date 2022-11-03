// 5. Write a C++ program to merge the two files.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;
    ofstream fout;
    fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques5.txt");
    ifstream fin1,fin2;
    fin1.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques2.txt");
    if(!fin1)
    {
        cout<<"File open error";
        return 0;
    }
    while(!fin1.eof())
    {
        getline(fin1,line);
        fout<<line;
    }
    fout<<" ";
    fin1.close();
    fin2.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques3.txt");
    if(!fin2)
    {
        cout<<"File open error";
        return 0;
    }
    while(!fin2.eof())
    {
        getline(fin2,line);
        fout<<line;
    }
    fin2.close();
    fout.close();
    cout<<"File merge succesful";
    return 0;
}

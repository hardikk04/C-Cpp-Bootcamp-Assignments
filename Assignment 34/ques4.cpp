/* 4. Write a program to copy the contents of one text file to another while changing the
case of every alphabet. */
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques3.txt");
    if(!fin)
    {
        return 0;
    }
    ofstream fout;
    fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/quesCopyFile.txt");
    if(!fout)
    {
        return 0;
    }
    char ch;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch>=97 && ch<=122)
        {
            ch = toupper(ch);
        }
        else if(ch>=65 && ch<=90)
        {
            ch = tolower(ch);
        }
        fout<<ch;
    }
    cout<<"Copy Succesfull";
    fin.close();
    fout.close();
    return 0;
}

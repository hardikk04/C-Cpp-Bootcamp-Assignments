// 2. Write a C++ program to read a text file and count the number of characters in it.
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ofstream fout;
    string characters;
    fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques2.txt");
    cout<<"Enter Characters for file"<<endl;
    while(fout)
    {
        getline(cin,characters);
        if(characters == "-1")
        {
            break;
        }
        fout<<characters;
        fout<<" ";
    }
    fout.close();
    cout<<endl;
    ifstream fin;
    fin.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques2.txt");
    cout<<"Showing File data"<<endl;
    while(!fin.eof())
    {
        getline(fin,characters);
        cout<<characters;
    }
    int i;
    for(i=0;characters[i];i++);
    cout<<"Length of file data"<<i;
    fin.close();
    return 0;

}

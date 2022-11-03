/* 6. Write a C++ program that counts the total number of characters, words and lines in
the file. */
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    int Line=0,word=0,Char=0;
    fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques6.txt");
    if(!fout)
    {
        cout<<"File open error";
        return 0;
    }
    cout<<"Enter data for file and press 0 to exit"<<endl;
    while(fout)
    {
        getline(cin,line);
        if(line=="0")
        {
            break;
        }
        else
        {
        Line++;
        fout<<line;
        fout<<" ";
        }
    }
    fout.close();
    ifstream fin;
    fin.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques6.txt");
    if(!fin)
    {
        cout<<"File open error in fin";
        return 0;
    }
    char ch;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch>=97 && ch<=122)
        {
            Char++;
        }
        else if(ch>=65 && ch<=90)
        {
            Char++;
        }
        if(ch==' ')
        {
            word++;
        }
    }
    fin.close();
    cout<<"Lines = "<<Line<<endl;
    cout<<"Char = "<<Char<<endl;
    cout<<"Words = "<<word-1<<endl;
    return 0;
}

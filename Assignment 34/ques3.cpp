// 3. Write a C++ program to open an output file 'a.txt' and append data to it.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string a;
    fout.open("I:/C,C++ Bootcamp/Assignments/C++ Assignments/File/ques3.txt",ios::app);
    cout<<"Enter a string and enter 0 to stop input"<<endl;
    if(!fout)
    {
        cout<<"File is not created";
        return 0;
    }
    else
    {
        while(fout)
        {
            getline(cin,a);
            if(a=="0")
            {
                break;
            }
            fout<<a;
            fout<<" ";
        }
    }
    fout.close();
    return 0;
}


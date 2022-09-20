/* 10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
*/
#include<iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3];
public:
    void input()
    {
        cout<<"Enter the 3x3 Matrix value"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void display()
    {
        cout<<endl<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    Matrix operator+(Matrix M)
    {
     Matrix temp;
            for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j]=a[i][j]+M.a[i][j];
            }
        }
        return temp;
    }
};
int main()
{
    Matrix m1,m2,m3;
    m1.input();
    cout<<endl<<"First Matrix"<<endl;
    m1.display();
    m2.input();
    cout<<endl<<"Second Matrix"<<endl;
    m2.display();
    m3=m1+m2;
    cout<<"After M1+M2"<<endl;
    m3.display();
}

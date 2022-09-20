/* 8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object. */
#include<iostream>
using namespace std;
class Matrix
{
    private:
        int a[3][3];
    public:
        Matrix(){}
        void input()
        {
            cout<<"Enter matrix elements"<<endl;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cin>>a[i][j];
                }
                    cout<<endl;
            }
        }
        void display()
        {
            cout<<"Matrix is"<<endl;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                    {
                    cout<<a[i][j]<<"  ";
                    }
                    cout<<endl;
            }
        }
        Matrix operator-()
        {
            Matrix temp;
           for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    temp.a[i][j]=-a[i][j];
                }
            }
            return temp;
        }
        void operator = (const Matrix &M )
        {
                for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                    a[i][j]=M.a[i][j];
            }
        }

};

int main()
{
    Matrix m1,m2;
    m1.input();
    m1.display();
    //m2=(-m1);
   // m2.display();
   m2=-m1;
   m2.display();
}

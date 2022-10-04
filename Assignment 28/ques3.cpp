/* 3. Overload subscript operator [] that will be useful when we want to check for an index
out of bound. */
#include<iostream>
using namespace std;
class Array
{
private:
    int a[100];
    const int size = 100;
public:
    Array(){}
    Array(int n,int index)
    {
        a[index]=n;
    }
    void setData(int n,int index)
    {
        a[index]=n;
    }
    int operator[](int index)
    {
        if(index>size)
        {
            cout<<"Index out of bound";
            exit(0);
        }
        return a[index];
    }
    void display(int index)
    {

        cout<<"Value is "<<a[index]<<endl;
    }
};
int main()
{
    Array a;
    a.setData(5,10);
    a.display(10);
    cout<<a[150];

}

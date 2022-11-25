// 2. Create an array and implement a search function in the array.
#include<iostream>
using namespace std;
class Array
{
private:
    int arr[100];
    int Size=0;
public:
    void Insert(int index,int value)
    {
        arr[index]=value;
        Size++;
    }

    ~Array()
    {
        delete []arr;
    }

    int getSize()
    {
        return Size;
    }

    int getValue(int index)
    {
        return arr[index];
    }

    void printAll()
    {
        for(int i=0;i<Size;i++)
        {
            cout<<"Index "<<i<<" Value "<<arr[i]<<endl;
        }
    }

    int Search(int value)
    {
        for(int i=0;i<Size;i++)
        {
            if(value == arr[i])
            {
                return value;
            }
        }
        return -1;
    }
};

int main()
{
    Array a;
    int value,n,index;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    cout<<"Enter the "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        a.Insert(i,value);
    }
    cout<<"Enter the index to access its value :";
    cin>>index;
    cout<<a.getValue(index);
    cout<<endl;

    cout<<"Enter the value for search :";
    cin>>index;
    if(a.Search(index)!=-1)
    {
        cout<<"Search value "<<a.Search(index)<<" Found"<<endl;
    }
    else
    {
        cout<<"Search value "<<index<<" is not found"<<endl;
    }

    a.printAll();

    cout<<a.getSize();

    return 0;
}

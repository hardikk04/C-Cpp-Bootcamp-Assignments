// 9. Create an array and implement a search function in the array.
#include<iostream>
using namespace std;
class dynamic_array
{
private:
    int *Array,Size,Capacity;
public:
    dynamic_array()
    {
        Array = new int[1];
        Size = 0;
        Capacity = 1;
    }
    ~dynamic_array()
    {
        delete Array;
        Size = 0;
        Capacity = 0;
    }

    void Resize()
    {
        if(Size==Capacity)
        {
            int *temp= new int[Capacity * 2];
            for(int i=0;i<Size;i++)
            {
                temp[i]=Array[i];
            }
            delete Array;
            Array = temp;
            Capacity = 2 * Size;
        }
    }

    void Insert(int index,int value)
    {
        if(Size==Capacity)
        {
            Resize();
        }
        else if(index>Capacity || index<0)
        {
            cout<<"Error"<<endl;
            return ;
        }

        Array[index]=value;
        Size++;
    }

    int Search(int value)
    {
        for(int i=0;i<Size;i++)
        {
            if(value == Array[i])
            {
                return 1;
            }
        }
        return -1;
    }

    void PrintAll()
    {
        for(int i=0;i<Size;i++)
        {
            cout<<"Index "<<i<<" Value "<<Array[i]<<endl;
        }

        cout<<"Size is "<<Size<<" Capacity is "<<Capacity<<endl;
    }
};

int main()
{
    dynamic_array a;

    a.Insert(0,10);
    a.PrintAll();
    cout<<endl;

    a.Insert(1,20);
    a.PrintAll();
    cout<<endl;

    a.Insert(2,30);
    a.PrintAll();
    cout<<endl;

    a.Insert(3,40);
    a.PrintAll();
    cout<<endl;

    a.Insert(4,50);
    a.PrintAll();
    cout<<endl;

    int value;
    cout<<"Enter the value to search : ";
    cin>>value;
    if(a.Search(value)!=-1)
    {
        cout<<"Search value "<<value<<" is found"<<endl;
    }
    else
    {
        cout<<"Search value "<<value<<" is not found"<<endl;
    }
    return 0;
}

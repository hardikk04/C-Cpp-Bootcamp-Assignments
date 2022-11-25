// 10. Create a function in Array to reverse an array.
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

    void Reverse()
    {
        for(int i=0;i<Size;i++)
        {
            for(int j=i+1;j<Size;j++)
            {
                int temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
        }
    }

    void PrintAll()
    {
        for(int i=0;i<Size;i++)
        {
            cout<<"Index "<<i<<" Value "<<Array[i]<<endl;
        }

    }

    void PrintSizeCapacity()
    {
        cout<<"Size is "<<Size<<" Capacity is "<<Capacity<<endl;
    }
};

int main()
{
    dynamic_array a;

    int n,value;

    a.PrintSizeCapacity();

    cout<<"Enter the array size :";
    cin>>n;
    cout<<endl;

    cout<<"Enter "<<n<<" Elements value"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        a.Insert(i,value);
    }

    a.PrintSizeCapacity();
    cout<<endl;
    cout<<"Print all Elements without reverse"<<endl;
    a.PrintAll();

    cout<<endl;
    a.Reverse();
    cout<<"Print all Elements after reverse"<<endl;
    a.PrintAll();

    return 0;
}

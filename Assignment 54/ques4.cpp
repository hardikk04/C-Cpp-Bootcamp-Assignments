// 4. Create a function in Array to sort the given array
#include<iostream>
using namespace std;
class Array
{
private:
    int arr[100],Size=0;

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

    void Sort()
    {
        for(int i=0;i<Size;i++)
        {
            for(int j=i+1;j<Size;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }

    void printAll()
    {
        for(int i=0;i<Size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    int Reverse()
    {
        for(int i=0;i<Size;i++)
        {
            for(int j=i+1;j<Size;j++)
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
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

    cout<<"Without Sort"<<endl;
    a.printAll();
    cout<<endl;

    cout<<"After Sort"<<endl;
    a.Sort();
    a.printAll();

    return 0;
}
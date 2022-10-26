/* 5. Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases

'n' items. Display the item-wise bill and total amount using appropriate
format. */
#include<iostream>
using namespace std;
class Item
{
private:
    int item_no,price;
    string name;
public:
    Item(){}
    Item(int item_no,int price,string name)
    {
        this->item_no = item_no;
        this->price = price;
        this->name = name;
    }
    void setIdata()
    {
        cout<<"Enter Item Name : ";
        cin>>name;
        cout<<endl;
        cout<<"Enter Item No. : ";
        cin>>item_no;
        cout<<endl;
        cout<<"Enter Item Price : ";
        cin>>price;
        cout<<endl;
    }
    string getName()
    {
        return name;
    }
    int getPrice()
    {
        return price;
    }
    int getItem_no()
    {
        return item_no;
    }
};
class Discount_item:public Item
{
    private:
        int discount,discount_price;
    public:
        Discout_item(){}
        void setDiscountData()
        {
            setIdata();
            cout<<"Enter Discount Percent : ";
            cin>>discount;
            cout<<endl<<"------------------------------"<<endl;
        }

        void display()
        {
            cout<<"Item Name :"<<getName()<<endl;
            cout<<"Item No :"<<getItem_no()<<endl;
            cout<<"Item Price :"<<getPrice()<<endl;
            cout<<"Discount Percent :"<<getDiscount()<<endl;
            cout<<"Discounted Price :"<<getDiscount_price()<<endl;
            cout<<"-------------------------------"<<endl;

        }
        int getDiscount()
        {
            return discount;
        }
        int getDiscount_price()
        {
            int temp=(getDiscount()*getPrice())/100;
            discount_price=getPrice()-temp;
            return discount_price;
        }
        int getD()
        {
            int temp=(getDiscount()*getPrice())/100;
            return temp;
        }
};
int main()
{
    Discount_item *i1;
    int size;
    cout<<"How many Item you want to Enter :";
    cin>>size;
    cout<<endl;
    i1 = new Discount_item[size];
    if(!i1)
    {
        cout<<"Memory Allocation Failed";
        return 0;
    }
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Item "<<i+1<<" Details"<<endl<<endl;        i1[i].setDiscountData();
    }
    for(int i=0;i<size;i++)
    {
        cout<<"Entered Item "<<i+1<<" Details"<<endl<<endl;
        i1[i].display();
    }
    int total_price=0,total_discount_price=0,final_bill=0;
    for(int i=0;i<size;i++)
    {
        total_price = i1[i].getPrice() + total_price;
        final_bill = i1[i].getDiscount_price() + final_bill;
        total_discount_price = i1[i].getD() + total_discount_price;
    }
    delete []i1;
    cout<<"Total Price : "<<total_price<<endl;
    cout<<"Discount Price : "<<total_discount_price<<endl;
    cout<<"Final Bill Price : "<<final_bill<<endl;

}



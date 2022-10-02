/* 8.Create a Rupee class and convert it into int. And Display it.

Example-
int main()

{
Rupee r = 10;
int x = r;
cout<<x;
return 0;
} */
#include<iostream>
using namespace std;
class Rupee
{
private:
    int a;
public:
    Rupee(){}
    Rupee(int r)
    {
        a = r;
    }
    void setData(int r)
    {
        a = r;
    }
    operator int()
    {
        return a;
    }
};
int main()
{
    Rupee r = 10;
    int x=r;
    cout<<x;
    return 0;
}

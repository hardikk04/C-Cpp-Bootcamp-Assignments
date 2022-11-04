/* 5. Create a base class called Photon. Use this class to store double type value of
wavelength that could be used to calculate photon energy. Create class
calculate_photonEnergy which will photon energy.
Using these classes, calculate photon energy. */
#include<iostream>
using namespace std;
class Photon
{
private:
    double wave,h;
public:
    virtual void setData()
    {
        cout<<"Enter the value of Planck's constant and wave frequency"<<endl;
        cin>>wave>>h;
    }
    double getWave()
    {
        return wave;
    }
    double getH()
    {
        return h;
    }
};
class Cal:public Photon
{
public:
    void calulate()
    {
        setData();
        double p;
        p= getWave()*getH();
        cout<<"The value of Photon Energy is "<<p<<endl;
    }
};
int main()
{
    Photon c;
    c.calulate();
}

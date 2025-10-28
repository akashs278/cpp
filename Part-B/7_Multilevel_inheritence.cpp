#include<iostream>
using namespace std;
class vehicle
{
public:
    void vehicle_info()
    {
        cout<<"I am a Vehicle"<<endl;
    }
};

class fourwheeler:public vehicle
{
    public:
        void fourwheeler_info()
        {
            cout<<"I have four wheeler"<<endl;
        }
};

class car:public fourwheeler
{
    public:
        void car_info()
        {
            cout<<"I am a car"<<endl;
        }
};

int main()
{
    car c1;
    c1.vehicle_info();
    c1.fourwheeler_info();
    c1.car_info();
    return 0;
}

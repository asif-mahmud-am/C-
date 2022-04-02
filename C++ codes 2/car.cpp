#include<iostream>
using namespace std;

class Car
{
public:
    Car() {cout<<"Car class"<<endl;}
    void vehicleType() {cout<<"Vehicle Type: Car"<<endl;}
};
class Maruti:public Car
{
public:
    Maruti() {cout<<"class Maruti"<<endl;}
    void brand() {cout<<"Brand Maruti"<<endl;}
    void speed() {cout<<"90kmph"<<endl;}
};
class Maruti_L16:public Maruti
{
public:
    Maruti_L16() {cout<<"Maruti model L_16"<<endl;}
    void speed() {cout<<"150kmph"<<endl;}
};
int main()
{
    Maruti_L16 obj;
    obj.vehicleType();
    obj.brand();
    obj.speed();

    return 0;
}

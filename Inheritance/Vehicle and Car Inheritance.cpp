#include <iostream>
using namespace std;
// Parent Class -> Vehicle
class Vehicle
{
public:
    void vehicle()
    {
        cout << "\n\nI am Vehicle";
    }
};

// Parent Class -> Car
class Car
{
public:
    void car()
    {
        cout << "\n\nI am Car ";
    }
};

//  Child Class -> Inherit Vehicle and Car
class Honda : public Vehicle, public Car
{
public:
    void honda()
    {
        cout << "\n\nI belongs to both categories ";
    }
};

int main()
{
    // object for Vehicle
    Vehicle vehicle;
    vehicle.vehicle();

    // Object for Car
    Car car;
    car.car();

    // Object for Honda
    Honda honda;
    honda.honda();

    // callng with honda object vehicle and car methods
    honda.vehicle();
    honda.car();
}
#include <iostream>
#include <string>
using namespace std;

class Vehicles {
protected:
    bool electric;
    float speed; // km/h
    float fuelUse; // litre per 100km
public:
    Vehicles() : electric(false), speed(0.0), fuelUse(0.0) {}

    virtual void describe();
    bool isElectric();
    float getSpeed();
    float getFuelUse();
};

class Car : public Vehicles {
public:
    Car();
    void describe();
};

class Bicycle : public Vehicles {
public:
    Bicycle();
    void describe();
};

class Truck : public Vehicles {
public:
    Truck();
    void describe();
};

class Motorcycle : public Vehicles {
public:
    Motorcycle();
    void describe();
};

class ElectricCar : public Vehicles {
public:
    ElectricCar();
    void describe();
};

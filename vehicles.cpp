#include "vehicles.h"

void Vehicles::describe() {
    cout << (electric ? "This is an electric vehicle." : "This is not an electric vehicle.") << endl;
    cout << "Speed: " << speed << " km/h." << endl;
    cout << "Fuel Use: " << fuelUse << " liters per 100 km." << endl;
}

Car::Car() {
    electric = false;
    speed = 150.0;
    fuelUse = 8.0;
}
void Car::describe() {
    cout << "Car: " << endl;
    Vehicles::describe();
}

Bicycle::Bicycle() {
    electric = false;
    speed = 25.0;
    fuelUse = 0.0;
}
void Bicycle::describe() {
    cout << "Bicycle: " << endl;
    Vehicles::describe();
}

Truck::Truck() {
    electric = false;
    speed = 100.0;
    fuelUse = 15.0;
}
void Truck::describe() {
    cout << "Truck: " << endl;
    Vehicles::describe();
}

Motorcycle::Motorcycle() {
    electric = false;
    speed = 120.0;
    fuelUse = 5.0;
}
void Motorcycle::describe() {
    cout << "Motorcycle: " << endl;
    Vehicles::describe();
}

ElectricCar::ElectricCar() {
    electric = true;
    speed = 160.0;
    fuelUse = 0.0;
}
void ElectricCar::describe() {
    cout << "Electric Car: " << endl;
    Vehicles::describe();
}



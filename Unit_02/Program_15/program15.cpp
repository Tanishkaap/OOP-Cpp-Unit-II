#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Base class for all types of vehicles
class Vehicle
{
protected:
    string registrationNumber;
    double ratePerDay;

public:
    Vehicle(string registration, double rate)
        : registrationNumber(move(registration)), ratePerDay(rate) {}

    // Calculates normal rental amount
    virtual double calculateRent(int days) const
    {
        return ratePerDay * days;
    }

    // Displays common vehicle details
    virtual void display() const
    {
        cout << "Registration: " << registrationNumber << '\n';
        cout << "Rate per day: " << ratePerDay << '\n';
    }

    virtual ~Vehicle() = default;
};

// Car is a type of Vehicle
class Car : public Vehicle
{
private:
    int numberOfDoors;

public:
    Car(string registration, double rate, int doors)
        : Vehicle(move(registration), rate), numberOfDoors(doors) {}

    void display() const override
    {
        Vehicle::display();
        cout << "Doors: " << numberOfDoors << '\n';
    }
};

// Bike is another type of Vehicle
class Bike : public Vehicle
{
private:
    int engineCapacity;

public:
    Bike(string registration, double rate, int capacity)
        : Vehicle(move(registration), rate),
          engineCapacity(capacity) {}

    // Bikes get a 10% discount on the calculated rent
    double calculateRent(int days) const override
    {
        return ratePerDay * days * 0.9;
    }

    void display() const override
    {
        Vehicle::display();
        cout << "Engine Capacity: "
             << engineCapacity << " cc\n";
    }
};

int main()
{
    Car car("MH12AB1234", 2000.0, 5);
    Bike bike("MH12CD5678", 800.0, 150);

    cout << "Car Details\n";
    car.display();

    cout << "Rent for 3 days: "
         << car.calculateRent(3) << "\n\n";

    cout << "Bike Details\n";
    bike.display();

    cout << "Rent for 3 days: "
         << bike.calculateRent(3) << '\n';

    return 0;
}

Output :
Car Details
Registration: MH12AB1234
Rate per day: 2000
Doors: 5
Rent for 3 days: 6000

Bike Details
Registration: MH12CD5678
Rate per day: 800
Engine Capacity: 150 cc
Rent for 3 days: 2160

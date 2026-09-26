#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Common base class
class Vehicle
{
protected:
    string registrationNumber;

public:
    explicit Vehicle(string registration)
        : registrationNumber(move(registration)) {}

    void start() const
    {
        cout << "Vehicle " << registrationNumber << " started\n";
    }
};

// Car inherits from Vehicle
class Car : public Vehicle
{
public:
    explicit Car(string registration)
        : Vehicle(move(registration)) {}

    void openBoot() const
    {
        cout << "Car boot opened\n";
    }
};

// Bike also inherits from Vehicle
class Bike : public Vehicle
{
public:
    explicit Bike(string registration)
        : Vehicle(move(registration)) {}

    void helmetReminder() const
    {
        cout << "Please wear a helmet\n";
    }
};

int main()
{
    Car car("MH12AB1234");
    Bike bike("MH12CD5678");

    car.start();
    car.openBoot();

    bike.start();
    bike.helmetReminder();

    return 0;
}

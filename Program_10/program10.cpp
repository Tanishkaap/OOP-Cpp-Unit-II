#include <iostream>

using namespace std;

// Base class
class Vehicle
{
public:
    // Virtual function can be overridden by derived classes
    virtual void move() const
    {
        cout << "Vehicle is moving\n";
    }

    virtual ~Vehicle() = default;
};

// Car provides its own version of move()
class Car : public Vehicle
{
public:
    void move() const override
    {
        cout << "Car moves on roads\n";
    }
};

// Boat also provides its own version of move()
class Boat : public Vehicle
{
public:
    void move() const override
    {
        cout << "Boat moves on water\n";
    }
};

int main()
{
    Car car;
    Boat boat;

    car.move();
    boat.move();

    return 0;
}

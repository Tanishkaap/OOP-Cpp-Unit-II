#include <iostream>

using namespace std;

// Base class
class Base
{
public:
    Base()
    {
        cout << "Base constructor\n";
    }

    ~Base()
    {
        cout << "Base destructor\n";
    }
};

// Derived class
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor\n";
    }

    ~Derived()
    {
        cout << "Derived destructor\n";
    }
};

int main()
{
    // Creating derived object calls constructors
    Derived object;

    return 0;
}
Output :
Creation:    Base → Derived
Destruction: Derived → Base

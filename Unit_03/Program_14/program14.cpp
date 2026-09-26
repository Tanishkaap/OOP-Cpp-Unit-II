#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display() const
    {
        cout << "Base object\n";
    }

    virtual ~Base() = default;
};

class Derived : public Base
{
public:
    void display() const override
    {
        cout << "Derived object\n";
    }
};

// Passing by value causes object slicing
void displayByValue(Base object)
{
    object.display();
}

// Passing by reference preserves the derived object
void displayByReference(const Base& object)
{
    object.display();
}

int main()
{
    Derived derived;

    cout << "Passing by value: ";
    displayByValue(derived);

    cout << "Passing by reference: ";
    displayByReference(derived);

    return 0;
}

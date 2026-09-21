#include <iostream>

using namespace std;

// Base class
class Base
{
public:
    void show() const
    {
        cout << "Base public function\n";
    }
};

// Public inheritance keeps the base public function accessible
class PublicDerived : public Base
{
};

// Private inheritance makes the inherited function private
class PrivateDerived : private Base
{
public:
    // Calling the base function from inside the derived class
    void callBaseShow() const
    {
        show();
    }
};

int main()
{
    PublicDerived publicObject;
    publicObject.show();

    PrivateDerived privateObject;
    privateObject.callBaseShow();

    // privateObject.show(); 
    // This would give an error because of private inheritance.

    return 0;
}

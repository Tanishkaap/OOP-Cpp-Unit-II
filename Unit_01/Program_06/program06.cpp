#include <iostream>
using namespace std;

class Demo
{
public:
    // Constructor runs automatically when the object is created
    Demo()
    {
        cout << "Constructor called" << endl;
    }

    // Destructor runs automatically when the object is destroyed
    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    // Creating the object calls the constructor
    Demo d;

    return 0;
}

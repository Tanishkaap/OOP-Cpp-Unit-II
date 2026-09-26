#include <iostream>
using namespace std;

class Test
{
private:
    int value;

public:
    Test(int v)
    {
        value = v;
    }

    // Inline function used to return the private value
    inline int getValue()
    {
        return value;
    }

    // Friend function can access private members of the class
    friend void show(Test t);
};

// Definition of the friend function
void show(Test t)
{
    cout << t.value << endl;
}

int main()
{
    Test obj(50);

    // Access the value using the public inline function
    cout << obj.getValue() << endl;

    // Access the same private value using the friend function
    show(obj);

    return 0;
}

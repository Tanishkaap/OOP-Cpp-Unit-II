#include <iostream>
using namespace std;

// Function that returns the sum of two numbers
int add(int x, int y);

int main()
{
    int result = add(10, 20);

    cout << "Sum = " << result << endl;

    return 0;
}

// Function definition
int add(int x, int y)
{
    return x + y;
}

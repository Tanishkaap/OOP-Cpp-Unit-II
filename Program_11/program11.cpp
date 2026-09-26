#include <iostream>

using namespace std;

// Abstract base class
class Shape
{
public:
    // Pure virtual function makes Shape an abstract class
    virtual double area() const = 0;

    virtual ~Shape() = default;
};

// Rectangle implements the area function
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    double area() const override
    {
        return length * width;
    }
};

// Circle also implements area()
class Circle : public Shape
{
private:
    double radius;

public:
    explicit Circle(double givenRadius)
        : radius(givenRadius) {}

    double area() const override
    {
        return 3.141592653589793 * radius * radius;
    }
};

int main()
{
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.0);

    cout << "Rectangle Area: " << rectangle.area() << '\n';
    cout << "Circle Area: " << circle.area() << '\n';

    return 0;
}

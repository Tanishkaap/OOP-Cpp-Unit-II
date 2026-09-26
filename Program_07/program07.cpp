#include <iostream>

using namespace std;

// First base class
class Academic
{
public:
    void display() const
    {
        cout << "Academic information\n";
    }
};

// Second base class with the same function name
class Sports
{
public:
    void display() const
    {
        cout << "Sports information\n";
    }
};

// Student inherits from both classes
class Student : public Academic, public Sports
{
public:
    // Calling both display functions separately
    void displayAll() const
    {
        Academic::display();
        Sports::display();
    }
};

int main()
{
    Student student;

    // Scope resolution tells C++ which display() to use
    student.Academic::display();
    student.Sports::display();

    student.displayAll();

    return 0;
}
